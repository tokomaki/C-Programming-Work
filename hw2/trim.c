/*

Pseudocode for trim.c Exercise 1-18 in K&R:

while there is still a line to process
    for each character starting at the end of the line
        find the first non blank character or the beginning of the line
        if a non-blank character is found
            add an eol and terminating zero
            and print it out
*/

#include <stdio.h>

/* define maximum length of lines */
#define MAXLINE 1000

/* define function prototypes */
int mygetline(char line[], int maxline);

int main() {
    int len;
    int i;
    char line[MAXLINE];
    while ((len = mygetline(line, MAXLINE)) > 0) {
        for (i = len - 1; i >= 0; --i) {
            if (line[i] != ' ' && line[i] != '\n' && line[i] != '\t') {
                break;
            }
        }
        line[i + 1] = '\0';
        printf("%s\n", line);
    }
    return 0;
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
