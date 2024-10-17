/*
 * ********************************************
 *
 *
 *    fn_tolower.c
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-10-18 00:57 by ChK
 *    Updated: 2024-10-18 01:17 by ChK
 *
 * ********************************************
*/

int fn_tolower(int c){
  if(c >= 65 && c <= 122){
    return (c + 32);
  }
  return c;
}
