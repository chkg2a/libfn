/*
 * ********************************************
 *
 *
 *    fn_strlen.h
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-10-17 23:56 by ChK
 *    Updated: 2024-10-17 23:56 by ChK
 *
 * ********************************************
 */

#ifndef FN_STR_H
#define FN_STR_H

namespace chk {
int fn_strlen(const char *);
int fn_atoi(const char *);
int fn_strlcpy(char *, const char *, int);
int fn_strlcat(char *, const char *, int);
char *fn_strchr(const char *, int);
char *ft_strtrim(char const *, char const *);
char *ft_strdup(const char *);
} // namespace chk

#endif // !FN_STRLEN
