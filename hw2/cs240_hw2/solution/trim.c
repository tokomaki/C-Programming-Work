/* trim.c: trim trailing spaces and tabs
   Bob Wilson 
   09/18/02  
   modified by Ron Cheung
   10/1/12
*/
#include <stdio.h>

#define MAXLINE 1000

/* function prototypes  */

int getline1(char s[], int lim);

/* pseudo code for the trim program

	while there is still a line to process
	  for each character starting at the end of the line
	  find the first non blank character or the beginning of the line
	     if a non-blank character is found
		 add an eol and terminating zero 
		 and print it out

   end of pseudo code
*/

int main()
{
	int  i, len, stop;
	char line[MAXLINE];

	while ((len = getline1(line, MAXLINE)) > 0) {
	  stop = 0;
	  for (i=len-1; i>=0 && !stop; --i)  {
	       if (line[i] != ' ' && line[i] != '\t' && line[i] != '\n')  {
	           stop = 1;      /* stop on any non-blank,tab,eol */
	  	   line[i+1] = '\n';       /* add an eol */
	  	   line[i+2] = '\0';       /* and a zero to term the string */
	  	   printf("%s",line);
	       }
	  }
	}
	return 0;
}

/* getline1: read a line into s, return length */
int getline1(char s[], int lim)
{
	int c, i;

	for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

