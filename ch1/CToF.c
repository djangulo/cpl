#include <stdio.h>

/* print Celsius-Fahrenheit table
    for C = 0, 20, ..., 300 */

#define LOWER -60   /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP  20  /* step size */

float ctof(float celsius);
float ftoc(float fahr);

/* rewritten into a function (per Exercise 1.15) */
void main()
{
    float fahr, celsius;
    int i;

    
    printf("%3s %6s %6s\n", "i", "C", "F");
    printf("-----------------\n");

    for (i = LOWER; i < UPPER; i = i + STEP){
        printf("%3d %6.1f %6.1f\n", i, ctof(i*1.0), ftoc(i*1.0));
    }
}

float ctof(float celsius)
{
    float fahr;
    return ((9.0 / 5.0) * celsius) + 32.0;
}

float ftoc(float fahr)
{
    float celsius;
    return (5.0/9.0) * (fahr-32);
}