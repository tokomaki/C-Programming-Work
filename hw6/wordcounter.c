/* Justin Victoria
 * Professor Xiaohui Liang
 * 04/21/2017
 * wordcounter.c
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define BUFSIZE 100
#define MAXWORD 30

typedef char *cpoint;
typedef struct node *ptr;
typedef struct node {
    cpoint word;
    int count;
    ptr next;
}   Tnode;

int getword(cpoint, int);
int getch(void);
void ungetch(int);
ptr talloc(void);
ptr insert(ptr, cpoint);
void print_unique(ptr);

char buf[BUFSIZE];
static int bufp;
static int unique, max, total;
ptr root = NULL;

int main(void) {
    char word[MAXWORD];
    while (getword(word, MAXWORD) != EOF) {
        if (isalpha(word[0])) {
            total++;
            root = insert(root, word);
        }
    }
    print_unique(root);
    exit(EXIT_SUCCESS);
}

int getword(cpoint word, int lim) {
    int c, getch(void);
    cpoint w = word;
    while (isspace(c = getch()))
        ;
    if (c != EOF)
        *w++ = c;
    if (!isalpha(c)) {
        *w = '\0';
        return c;
    }
    for ( ; --lim > 0; w++)
        if (!isalnum(*w = getch())) {
            ungetch(*w);
            break;
        }
    *w = '\0';
    return word[0];
}

int getch(void) {
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) {
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}

ptr talloc(void) {
    return (ptr) malloc(sizeof(Tnode));
}

ptr insert(ptr n, cpoint word) {
    int diff;
    if (n == NULL) {
        n = talloc();
        n->word = strdup(word);
        n->count = 1;
        n->next = NULL;
        unique++;
    }
    else if ((diff = strcmp(word, n->word)) == 0)
        n->count++;
    else
        n->next = insert(n->next, word);
    if (n->count > max) { max = n-> count; }
    return n;
}

void print_unique(ptr n) {
    if (n == NULL)
        return;
    printf("%d Total Words\n", total);
    printf("%d Unique Words\n\n", unique);
    while (max > 0) {
        ptr temp = root;
        printf("%2d Occurances of:\n", max);
        while (temp != NULL) {
            if (temp->count == max)
                printf("\t%s\n", temp->word);
            temp = temp->next;
        }
        printf("\n");
        --max;
    }
}
