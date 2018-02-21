/* Name: Justin Victoria
 * Date: 3/5/2017
 *  Program for functions to study integer-hex conversions
 *  Pseudocode:
 *  intialize variables
 *  Main
 *     while scanned digits of bitwise And of number is equal to 1
 *        initialize character array with ENOUGH_SPACE
 *        call itox
 *        assign m to a call to xtoi passing in the array
 *        print using default
 *     return 0
 */

#include <stdio.h>
#include <string.h>
#include "xbits.h"

#define ENOUGH_SPACE 2*sizeof(int)

int number;
int m = 0;

int main() {

   while (scanf("%d", &number) == 1) {
      char hexstring[ENOUGH_SPACE];
      itox(hexstring, number);
      m = xtoi(hexstring);
      printf("\t%12d %s %12d\n", number, hexstring, m);
   }
   return 0;  /* everything is just fine */
}


