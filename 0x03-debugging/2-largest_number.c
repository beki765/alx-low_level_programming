#include "main.h"

/**
 * largest_number - returns the largest og 3 numbers
 * @a: first intiger
 * @b: second integer
 * @c: third intiger
 * Returns: largest number
 */
int largest_number(int a, int b, int c)
{
int largest;

if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >=c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}
