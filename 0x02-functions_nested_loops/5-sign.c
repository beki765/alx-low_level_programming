#include <stdio.h>

/**
 * print_sign - return 0 letter not lowercase, 1 letter lowercase
 *
 *@n: the int to print
 *Return: Always 0.
 */
int print_sign(int n)
{
int r;

if (n > 0)

{
r = print_sign(98);
putchar(',');
putchar (' ');
putchar (r,'0');
putchar ('\n');
}

else if (n == 0)
{
putchar ('0');
return (0);
}

else
{
putchar ('-');
return (-1);
}

}
