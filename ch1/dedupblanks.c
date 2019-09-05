#include <stdio.h>
/*  Exercise 1-9. Write a program to copy its input to its output, replacing
    each string of one or more blanks by a single blank. */
void main()
{
    int c, p;
    p = -1;
   
    while ( (c = getchar()) != EOF) {
        if (c == ' ' && p == ' ')
            continue;
        putchar(c);
        p = c;
    }

}
