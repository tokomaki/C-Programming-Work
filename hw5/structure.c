/*
input argument

Array pointers

Dynamic memory allocation

Circular Buffer
*/

//tail.c
#include <stdio.h>
#include "lineholder.h"

int main(int argc, char * argv[]) {
    //interprets the command line argument

    int nline = 10;
    int input_line;
    
    if(argc == 2) {
        if(*argv[1] == '-') {
            //need a way to convert a string to a digit
            if (input_line < MAXLEN)
            nline = 50;
            //
        }
    }

    //call init_lineholder(int nlines)
    init_lineholder(nlines);

    //loop calling getline
    while(getline1(line, MAXLINE) > 0) {
        insert_line(line);
    }

    //print lines

    print_lines();

    return 1;
}

int getline1(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) ! = EOF && c != '\n'; i++) {
        s[i] = c;

    }
    if ( c == '\n') {
        s[i] = c;
	i++;
    }
    s[i] = '\0';
    return i;

//lineholder.c
#include <stdio.h>
#include "lineholder.h"

void init_lineholder(int n) {
}

void insert_line(char * line) {
}

void print_lines() {
}
