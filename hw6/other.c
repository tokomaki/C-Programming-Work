#include <stdio.h>
#define pr2(b,c,d) printf(#c"= %"#b"  "#d"= %"#b"\n", c,d)

int main() {
    static struct S{
        char c[4];
        char * a; 
    } s1 = {"abc", "def"}; 

    static struct SS{
        char *cp;
        struct S ss1;
    } s2 = {"ghi", {"jkl", "mno"}};

    struct S s3[] = {
                    {"abc", "def"},
                    {"ghi", "jkl"},
                    {"mno", "pqr"}};
    pr2 (c, s1.c[0], *s1.a);
    pr2 (s, s1.c, s1.a);

    pr2 (s, s2.cp, s2.ss1.a);
    pr2 (s, ++s2.cp, ++s2.ss1.a);
    
    /* structure pointer */
    struct S *p = &s1;
    pr2(c, p->c[0], *p->a++);

    pr2(c,p->c[1], *p->a);

    return 0;
}
