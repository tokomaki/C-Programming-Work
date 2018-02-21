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
static int prime, lines;

void init_lineholder(int n) {
	if (n > MAXLINE) { lines = MAXLINE; }
	else { lines = n; }
	for (int i = 0; i < lines; i++) { ptr[i] = NULL; }
}

void insert_line(char *line) {
	if (prime == lines) { prime = 0; }
	free((void*) ptr[prime]);
	ptr[prime] = (char*) malloc(strlen(line) + 1);
	strcpy(ptr[prime++], line);
}

void print_lines(void) {
	if (lines == 0) { return; }
	int i = prime;
	do {
		if (ptr[i] != NULL) { printf("%s", ptr[i]); }
		free(ptr[i]);
		i = (i + 1) % lines;
	} while(i != prime);
}
