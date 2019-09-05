#include <stdio.h>
/* count blanks, tabs and newlines in input */
void main()
{
    int c, nl, b, t;

    nl = 0;
    b = 0;
    t = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == ' ')
            ++b;
        if (c == '\t')
            ++t;
    }
    printf("blanks: %6d\ntabs  : %6d\nlines : %6d\n", b, t, nl);
}