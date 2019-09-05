#include <stdio.h>
/* print the value of EOF */
void main()
{
   printf("%d, %d, %d\n", EOF, -1, (getchar() != EOF));
}
