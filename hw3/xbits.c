/*  Name: Justin Victoria
 *  Date: 3/5/2017
 *  Professor Xiaohui
 *  
 *  Pseudocode:
 *  void itox(character array, integer variable) {
 *  Initialize variables
 *  While the number is not equal to 0
 *     Assign the remainder variable to the number % 16
 *         Start switch case testing remainder
 *         If remainder is 0, assign the array at count to '0', and so forth
 *     Assign number to itself over 16
 *     increment count variable
 *  While count is <= 7
 *     Assign the array at count to '0'
 *     Increment count
 *  for ([0, count/2), increment iterating variable)
 *     Swap array at i with array at count - i - 1
 *  Assign the array at 2 * sizeof(int) to '\0'
 *  print using default
 *  }
 *
 *  int xtoi(character array)
 *  Initialize variables
 *  for (int i = 0, until the array at i != '\0'; increment i)
 *     if (the array at i >= '0' AND the array at i <= '9'
 *        assign temp to the array at i minus '0'
 *        assign total to 16 * total + temp
 *     assign temp to the array at i minus 'A' + 10
 *     assign total to 16 * total + temp
 *     otherwise
 *        assign temp to 0
 *        assign total to 16 * total + temp
 *  return total
 *  print by default
 */

#include <stdio.h>
#include "xbits.h"

/* function represents the int n as a hexstring which it places in the
hexstring array */

void itox( char hexstring[], int n) {
   char store;
   int number = n;
   int rem;
   int count = 0;

   while (number != 0) {
      rem = number % 16;
      switch (rem) {
         case 0:
	    hexstring[count] = '0';
	    break;
	 case 1:
	    hexstring[count] = '1';
	    break;
	 case 2:
	    hexstring[count] = '2';
	    break;
	 case 3:
	    hexstring[count] = '3';
	    break;
	 case 4:
	    hexstring[count] = '4';
	    break;
	 case 5:
	    hexstring[count] = '5';
	    break;
	 case 6:
            hexstring[count] = '6';
	    break;
	 case 7:
	    hexstring[count] = '7';
	    break;
	 case 8:
	    hexstring[count] = '8';
	    break;
	 case 9:
	    hexstring[count] = '9';
	    break;
	 case 10:
	    hexstring[count] = 'A';
	    break;
	 case 11:
	    hexstring[count] = 'B';
	    break;
	 case 12:
	    hexstring[count] = 'C';
	    break;
	 case 13:
	    hexstring[count] = 'D';
	    break;
	 case 14:
	    hexstring[count] = 'E';
	    break;
	 case 15:
	    hexstring[count] = 'F';
	    break;
      }
      number /= 16;
      count++;
   }
   while (count <= 7) {
      hexstring[count] = '0';
      count++;
   }
   for (int i = 0; i < count / 2; ++i) {
      store = hexstring[i];
      hexstring[i] = hexstring[count - i - 1];
      hexstring[count - i - 1] = store;
   }
   hexstring[2 * sizeof(int)] = '\0';
   printf("in itox, processing %d\n", n);
}


/* function converts hexstring array to equivalent integer value  */

int xtoi( char hexstring[]) {
   int total, temp, count = 0;
   for (int i = 0; hexstring[i] != '\0'; ++i) {
      if (hexstring[i] >= '0' && hexstring[i] <= '9') {
         temp = hexstring[i] - '0';
	 total = 16 * total + temp;
      }
      else if (hexstring[i] >= 'A' && hexstring[i] <= 'F') {
         temp = hexstring[i] - 'A' + 10;
	 total = 16 * total + temp;
      }
      else {
         temp = 0;
	 total = 16 * total + temp;
      }
   }
   return total;
   printf("in xtoi, processing %s\n", hexstring);
}

