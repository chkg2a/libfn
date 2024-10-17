/*
 * ********************************************
 *
 *
 *    fn_isalpha.c
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-10-17 18:35 by ChK
 *    Updated: 2024-10-17 18:35 by ChK
 *
 * ********************************************
*/

int fn_isalpha(const int c){
  return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
