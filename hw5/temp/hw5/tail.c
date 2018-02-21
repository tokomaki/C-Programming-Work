/* Justin Victoria
 * 04/08/2017
 * Professor Xiaohui Liangi
 * tail.c
 *
 * Pseudocode:
 * Interprets the command line argument.
 * Calls init_lineholder(int nlines) with the number from the command line
 * Does a loop calling getline and insert_line(char *line).
 * When getline returns 0 (indicating EOF on stdin), it calls print_lines().
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include "lineholder.h"

int getline1(char c[], int limit);

int main(int argc, char * argv[]) {
    //interprets the command line argument

    int nline;
    char line[MAXLINE];

    if (argc <= 1) { nline = 10; }
    else if (argc > 1 && *(argv[1]) == '-') { nline = atoi(++argv[1]); }

    //call init_lineholder(int nlines)
    init_lineholder(nline);

    int str = 0;
    //loop calling getline
    while (str = getline1(line, MAXLINE) > 0 && str != EOF) { insert_line(nline); }

    //print lines
    print_lines();

    return 1;
}

int getline1(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}
