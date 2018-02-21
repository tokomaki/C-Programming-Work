/* reverse.c: reverse a string
   bob wilson  
   09/18/02  
   */
#include <stdio.h>

#define MAXLINE 1000

/* function prototypes */
void reverse(char line []);
int strlen1(char line[]);

int main ()
{
	int i, c;
	char line[MAXLINE];

	i = 0;
	while ((c = getchar()) != EOF) {
		line[i] = c;
		++i;
		if (c == '\n') {
			line[i] = '\0';    /* add a zero to end string */
			reverse(line);
			printf("%s", line);
			i = 0;
		}
	}
	return 0;
}

/* pseudo code for reverse function

	find length of the string to reverse
	for each character from the beginning of the string to half way
	     copy the character here to a holding variable
	     copy the character the same distance from end to here
	     copy the holding variable to the same distance from end

end of pseudo code
*/
void reverse (char line[])
{
	int len, i;
	char c;

	len = strlen1(line) - 1;             /* array index = len - 1  */
	for (i=0; i<=len/2; ++i) {          /* go halfway through the line */
		c = line[i];                /* save a character from line */
		line[i] = line[len-i];      /* overwrite that character */
		line[len-i] = c;            /* save reversed character */
	}
}

int strlen1 (char line[])
{
	int i;

	i=0;
	while (line[i])
		++i;
	return i;
}

