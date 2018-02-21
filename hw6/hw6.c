/* Refer to slides when implementing empty methods
 * 
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define NKEYS 5000
#define BUFSIZE 100
#define MAXWORD 30


int getword(char*, int);
int getch(void);
void ungetch();

void insert(char*);
void print(void);


char buf[BUFSIZE]
int bufp = 0;

struct key {
    char * word;
    int count;
    struct key * next_node;
}keytab_root; 

keytab_root.next_node = (struct key *)malloc(sizeof(struct key));

int main() { 
    char word[MAXWORD];
    while(getword(word, MAXWORD) != EOF) {
        if(isalpha(word[0])) {
            insert(word);
        }
    }

    print();

    return 1; 
}

void insert(char *newword) {
    keytab[i].word = (char*)malloc(strlen(newword) + 1);
    strcpy(keytab[i].word, newword);
}

void print() {
}

int getword(char *word, int lim) {
    return 1; 
}

int getch() {
    return 1;
}

void ungetch() {
}
