#include <ctype.h>
#include "main.h"
#include <stdio.h>
/**
 * print_sign - Checks if a character n is lower equal or greater than 0
 * @n: The character to check (ASCII code)
 *
 * Return: 1 if greater, 0 if is 0 and -1 if is less
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
