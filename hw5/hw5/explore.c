/* explore.c: program to explore memory locations via pointers
   Justin Victoria
   04/8/2017
   Professor Xiaohui Liang
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
        printf("address of array[0] = %p\n", &array[0]);


/* add code here to print the variables a, b, c, d and pointers  */
        printf("a = %x, b = %x, c = %x, d = %x\n", a, b, c, d);
        printf("ap = %p, bp = %p, cp = %p, dp = %p\n", ap, bp, cp, dp);


/* add code here to print array[i] for i = 0 to high enough value */
	for (int i = 0; i < 6; i++) {
            printf("%x\n", array[i]);
        }


/* call subroutine foobar and pass arguments  */
	foobar(a, d, &a, &d);

	return 0;
}

void foobar(int x, int y, int *xp, int *yp)
{
	int array[1] = {0x10101010};
	
	printf("Entering foobar\n");

/* add code here to print address of array[0]  */
        printf("auto variable array = %p\n", &array[0]);


/* add code here to print array[i] for i = 0 to high enough value */
        for (int i = 0; i < 40; i++) {
            printf("%x\n", array[i]);
        }

	return;
}

