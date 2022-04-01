#include "main.h"
/**
 * _pow_recursion - function that return the
 * value of x raised to the power of y
 *
 * @x: parameter to base
 * @y: parameter of pow
 *
 * Return: End program
 */
int _pow_recursion(int x, int y)
{
int result = x;

if (y < 0)
return (-1);


else if (y == 0)
return (1);

result *= _pow_recursion(x, y - 1);

return (result);
}