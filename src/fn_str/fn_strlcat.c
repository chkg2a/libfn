/*
 * ********************************************
 *
 *
 *    fn_strlcat.c
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-10-18 00:13 by ChK
 *    Updated: 2024-10-18 00:13 by ChK
 *
 * ********************************************
*/

#include "fn_str.h"

int fn_strlcat(char * dst, const char * src, int dstsize){
  const int dstpos = fn_strlen(dst);
  const int srcpos = fn_strlen(src);
  int pos = dstsize - dstpos - 1;
  int currentPos = 0;

  if(dstsize <= dstpos) return dstpos + srcpos;

  while(pos-- > 1 && src[currentPos] != '\0'){
    dst[dstpos + currentPos]  = src[currentPos];
    currentPos++;
  }

  dst[dstpos + currentPos] = '\0';

  return dstpos + srcpos;
}
