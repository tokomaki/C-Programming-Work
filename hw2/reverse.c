/*
Pseudo code for reverse.c Exercise 1-19 in K&R:

    find length of the string to reverse
    for each character from the beginning of the string to half way
        copy the character here to a holding variable
        copy the character the same distance from end to here
        copy the holding variable to the same distance from end

end of psuedo code
*/

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int mygetline(char line[], int maxline);

int main() {
    int len;             // current line length
    char line[MAXLINE];  // current input line
    int temp;            // holding variable

    while ((len = mygetline(line, MAXLINE)) > 0) {
        for (int i = 0; i < len / 2; ++i) {
	    temp = line[i];
	    line[i] = line[len - 1 - i];
	    line[len - 1 - i] = temp;
	}
    printf("%s\n", line);
    }
}

int mygetline(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) 
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;    
    }
    s[i] = '\0';
    return i;
}
