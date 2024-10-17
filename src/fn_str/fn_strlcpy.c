/*
 * ********************************************
 *
 *
 *    fn_strlcpy.c
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-10-17 23:59 by ChK
 *    Updated: 2024-10-17 23:59 by ChK
 *
 * ********************************************
*/

int fn_strlcpy(char * dst, const char * src, int size){
  int pos = 0;
  while(size-- > 1){
    if(src[pos] == '\0'){
      dst[pos] = '\0';
      return pos;
    }
    dst[pos] = src[pos];
    pos++;
  }
  dst[pos] = '\0';
  while(src[pos] != '\0') pos++;
  return pos;
}
