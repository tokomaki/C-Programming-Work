/* hist.c
Modified by Justin Victoria
03/15/2017
Originally:
visitype.c
Bob Wilson
09/09/2002
*/
#include <stdio.h>

/*
while not at EOF
print the char and hexdec for each character
*/

int main ()
{
    int list[128];
    int y;
    int x;
    int c;
    char asciiname[] =
        "NUL\0"  "SOH\0"  "STX\0"  "ETX\0"  "EOT\0"  "ENQ\0"  "ACK\0"  "BEL\0"
        " BS\0"  " HT\0"  " NL\0"  " VT\0"  " NP\0"  " CR\0"  " SO\0"  " SI\0"
        "DLE\0"  "DC1\0"  "DC2\0"  "DC3\0"  "DC4\0"  "NAK\0"  "SYN\0"  "ETB\0"
        "CAN\0"  " EM\0"  "SUB\0"  "ESC\0"  " FS\0"  " GS\0"  " RS\0"  " VS\0"
        " SP\0"  "  !\0"  "  \"\0" "  #\0"  "  $\0"  "  %\0"  "  &\0"  "  '\0"
        "  (\0"  "  )\0"  "  *\0"  "  +\0"  "  ,\0"  "  -\0"  "  .\0"  "  /\0"
        "  0\0"  "  1\0"  "  2\0"  "  3\0"  "  4\0"  "  5\0"  "  6\0"  "  7\0"
        "  8\0"  "  9\0"  "  :\0"  "  ;\0"  "  <\0"  "  =\0"  "  >\0"  "  ?\0"
        "  @\0"  "  A\0"  "  B\0"  "  C\0"  "  D\0"  "  E\0"  "  F\0"  "  G\0"
        "  H\0"  "  I\0"  "  J\0"  "  K\0"  "  L\0"  "  M\0"  "  N\0"  "  O\0"
        "  P\0"  "  Q\0"  "  R\0"  "  S\0"  "  T\0"  "  U\0"  "  V\0"  "  W\0"
        "  X\0"  "  Y\0"  "  Z\0"  "  [\0"  "  \\\0" "  ]\0"  "  ^\0"  "  _\0"
        "  `\0"  "  a\0"  "  b\0"  "  c\0"  "  d\0"  "  e\0"  "  f\0"  "  g\0"
        "  h\0"  "  i\0"  "  j\0"  "  k\0"  "  l\0"  "  m\0"  "  n\0"  "  o\0"
        "  p\0"  "  q\0"  "  r\0"  "  s\0"  "  t\0"  "  u\0"  "  v\0"  "  w\0"
        "  x\0"  "  y\0"  "  z\0"  "  {\0"  "  |\0"  "  }\0"  "  ~\0"  "DEL\0"
        ;
for (x = 0; x < 128; ++x)
    list[x] = 0;
while ((c = getchar()) != EOF) {
    ++list[c];
}
printf("\nDEC  HEX  ASCII NAME   COUNT\n");
for (y = 0; y < 128; ++y) {
    if (list[y] != 0)
        printf("%d\t%3x\t%s\t%d\n", y, y, &asciiname[4 * y], list[y]);
}
return 0;
}
