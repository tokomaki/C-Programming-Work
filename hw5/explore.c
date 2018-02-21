/* explore.c: program to explore memory locations via pointers
   bob wilson
   03/13/2003
   modified by Ron Cheung 7/8/2003
   */

#include <stdio.h>

int a = 0x13579753;
static int b = 0x24680864;

void foobar(int, int, int *, int *);

int main(void)
{
	static int c = 0xaaaa5555;
	int d = 0x5555aaaa;
	int *ap = &a;
	int *bp = &b;
	int *cp = &c;
	int *dp = &d;
	int array[1] = {0x01010101};

/* add code here to print the address of array[0]  */



/* add code here to print the variables a, b, c, d and pointers  */



/* add code here to print array[i] for i = 0 to high enough value */
	



/* call subroutine foobar and pass arguments  */
	foobar(a, d, &a, &d);

	return;
}

void foobar(int x, int y, int *xp, int *yp)
{
	int array[1] = {0x10101010};
	
	printf("Entering foobar\n");

/* add code here to print address of array[0]  */



/* add code here to print array[i] for i = 0 to high enough value */


	return;
}

