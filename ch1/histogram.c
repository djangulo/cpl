#include <stdio.h>
/*  Exercise 1-13. Write a program to print a histogram of the lengths of
    words in its input. It is easy to draw the histogram with the bars
    horizontal; a vertical orientation is more challenging.count digits,
    blanks, tabs and newlines in input */

#define ARRLEN 200 /* arbitrary lenght of array */

void main()
{
    int c, i, j, count;
    int n[ARRLEN];

    for (i = 0; i < ARRLEN; ++i)
        n[i] = 0;
    i = 0;
    count = 1;
    while ((c = getchar()) != EOF) {
        ++n[i];
        if (c == ' '){
            ++count;
            ++i;
        }
    }
    
    for (i = 0; i < count; ++i) {
        printf("%3d   ", i);
        for (j = 0; j < n[i]; ++j) {
            printf("-");
        }
        printf("\n");
    }
}