/*
 * ********************************************
 *
 *
 *    fn_strlen.c
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-10-17 23:49 by ChK
 *    Updated: 2024-10-17 23:49 by ChK
 *
 * ********************************************
*/

int fn_strlen(const char * c){
  int pos = 0;
  while(c[++pos] != '\0');
  return pos;
}
