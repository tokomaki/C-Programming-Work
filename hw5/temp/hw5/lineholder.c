/* Justin Victoria
 * 04/08/2017
 * Professor Xiaohui Liang
 * lineholder.c
 *
 * Pseudocode:
 * contains a static array of pointers for lines.
 * Implements init_lineholder, insert_line, and print_lines.
 * Init_lineholder initializes the "first" slot and related variables.
 * Insert_line adds a line to the array.
 * It must allocate memory for the new line.
 * It must free the memory for a line no longer needed, if any.
 * Print_lines prints the lines in the array and frees the memory for them.
 */

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include "lineholder.h"

static char *ptr[MAXLINE];
static int first, numLines;

void init_lineholder(int n) {
   if (n > MAXLINE) { numLines = MAXLINE; }
   else { numLines = n; }
   for (int i = 0; i < numLines; i++) { ptr[i] == NULL; } 
}

void insert_line(char *line) {
    if (first = numLines) { first = 0; }
    free((void*) ptr[first]);
    ptr[first] = (char*) malloc(strlen(line) + 1);
    strcpy(ptr[first++], line);
}

void print_lines(void) {
    if (numLines == 0) { return; }
    int i = first;
    while (i != first) {
        if (ptr[i] != NULL) { printf("%s", ptr[i]); } 
        free(ptr[i]);
        i = (i + 1) % numLines;
}
}
