/*
 *  stub driver for functions to study integer-hex conversions
 *
 */

#include <stdio.h>
#include <string.h>
#include "xbits.h"

#define ENOUGH_SPACE 1 /* not really enough space */

int main() {
  char hexstring[ENOUGH_SPACE];
  int m=0, n = 0x79FEB220;
  itox( hexstring, n);


  /* for stub testing: create a fake input string */
  strcpy( hexstring, "6BCD7890"); 
  m= xtoi(hexstring);

  printf("\t%12d %s %12d\n", n,hexstring, m);

  return 0;  /* everything is just fine */
}


