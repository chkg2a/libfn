/*
 * ********************************************
 *
 *
 *    fn_atoi.c
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-10-18 00:58 by ChK
 *    Updated: 2024-10-18 00:58 by ChK
 *
 * ********************************************
*/

#include "fn_char.h"

int fn_atoi(const char * str){
  int number = 0;  
  int pos = 0;
  while(str[pos] != '\0'){
    if(fn_isdigit(str[pos])){
      number = number * 10 + str[pos] - 48;
    }
    pos++;
  }
  return number;
}
