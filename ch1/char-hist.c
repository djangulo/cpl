#include <stdio.h>
/*  Exercise 1-14. Write a program to print a histogram of the frequencies of
    different characters in its input. */
void main()
{
    int c, nl, b, t, i, j;
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
    for (i = 0; i < 10; ++i){
        printf("%10d:", i);
        for (j = 0; j < ndigit[i]; ++j) {
            printf("-");
        }
        printf("\n");
    }
    printf("%10s:", "blanks");
    for (j = 0; j < b; ++j) {
        printf("-");
    }
    printf("\n");
    printf("%10s:", "tabs");
    for (j = 0; j < t; ++j) {
        printf("-");
    }
    printf("\n");
    printf("%10s:", "newlines");
    for (j = 0; j < nl; ++j) {
        printf("-");
    }
    printf("\n");
}