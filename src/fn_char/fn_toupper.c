/*
 * ********************************************
 *
 *
 *    fn_toupper.c
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-10-18 00:38 by ChK
 *    Updated: 2024-10-18 01:16 by ChK
 *
 * ********************************************
*/

int fn_toupper(int c){
  if(c >= 65 && c <= 122){
    return (c - 32);
  }
  return c;
}
