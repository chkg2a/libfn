/*
 * ********************************************
 *
 *
 *    fn_isalnum.c
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-10-17 23:39 by ChK
 *    Updated: 2024-10-17 23:39 by ChK
 *
 * ********************************************
*/

#include "fn_char.h"

int fn_isalnum(const int c){
  return (fn_isalpha(c) || fn_isdigit(c));
}
