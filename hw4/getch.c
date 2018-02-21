/*
 * Justin Victoria
 * 03/22/2017
 * getch.c
 * 
 * Pseudocode:
 * Initialize variables
 * In getch, return appropiately for test bufp >0
 * In ungetch, if bufp >= BUFSIZE, print that
 * it's too many chracters
 * otherwise increment bufp++ index of buf and c to it
 *
 * getch  returns one  character from stdin 
 * or from the buffer buf if it is not empty
 * ungetch puts one character in the buffer buf 
 */

#include <stdio.h>
#define BUFSIZE 100

char buf[BUFSIZE];        /* buffer for ungetch */
int  bufp = 0;            /* next free position in buf */

int getch(void)           /* get a (possibly pushed back) character */
{
    return(bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)        /* push character back on input */
{
    if (bufp >= BUFSIZE)
	printf("ungetch: too many character \n");
    else
	buf[bufp++] = c;
}
