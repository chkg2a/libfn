#* ********************************************
#*
#*
#*    Makefile
#*
#*    By: ChK <chk@chkg2a.com}>
#*
#*    Created: 2024-10-17 19:08 by ChK
#*    Updated: 2024-10-18 20:45 by ChK #*
#* ********************************************

# Compiler
CC = g++

# Compiler flags
CFLAGS = -Wall -Wextra -Werror -I./includes

# Static library name
NAME = libfn.a
OUTNAME = a.out
TESTDIR = test
TESTFILE = test.c
INCLUDESDIR = /usr/local/include/chkg2a

# Source files
SRC = $(wildcard src/fn_char/*.c src/fn_str/*.c src/fn_dsa/*.cpp)

# Object files (generated from source files)
OBJ = $(SRC:.c=.o)
OBJ := $(OBJ:.cpp=.o)

# Default target
all: $(NAME)

# Rule to create the static library
$(NAME): $(OBJ)
	@ar -rcs $@ $^

# Rule to compile source files into object files
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

# Rule to build and run the test file
run:
	@$(CC) $(CFLAGS) -o ${OUTNAME} ${TESTDIR}/${TESTFILE} -L. -lfn
	@./${OUTNAME}

# Install target to place the library and header files
install:
	@install -m 644 $(NAME) /usr/local/lib/
	@echo "Library installed to /usr/local/lib/"
	@mkdir -p $(INCLUDESDIR)
	@cp -r ./includes/* $(INCLUDESDIR)
	@echo "Header files installed to $(INCLUDESDIR)"

# Uninstall the library and header files
uninstall:
	@rm -f /usr/local/lib/$(NAME)
	@echo "Library removed from /usr/local/lib/"
	@rm -rf $(INCLUDESDIR)
	@echo "Header files removed from $(INCLUDESDIR)"

clean install: uninstall install

# Clean up object files and the library
clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f ${OUTNAME}

re: fclean all run

.PHONY: all clean fclean re install
