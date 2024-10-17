#* ********************************************
#*
#*
#*    Makefile
#*
#*    By: ChK <chk@chkg2a.com}>
#*
#*    Created: 2024-10-17 19:08 by ChK
#*    Updated: 2024-10-17 19:08 by ChK
#*
#* ********************************************

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror -I./includes

# Static library name
NAME = libfn.a

# Source files
SRC = src/fn_char/fn_isalpha.c

# Object files (generated from source files)
OBJ = $(SRC:.c=.o)

# Default target
all: $(NAME)

# Rule to create the static library
$(NAME): $(OBJ)
	@ar -rcs $@ $^

# Rule to compile source files into object files
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

run:
	@$(CC) $(CFLAGS) -o a.out test/test.c -L. -lfn
	@./a.out

# Clean up object files and the library
clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f a.out

re: fclean all run

.PHONY: all clean fclean re

