#include <stdio.h>
/* count digits, blanks, tabs and newlines in input */
void main()
{
    int c, nl, b, t, i;
    int ndigit[10];

    nl = b = t = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        if (c == '\n')
            ++nl;
        if (c == ' ')
            ++b;
        if (c == '\t')
            ++t;
    }
    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf("blanks: %6d\ntabs  : %6d\nlines : %6d\n", b, t, nl);
}