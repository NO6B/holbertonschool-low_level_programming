# include <stdlib.h>
/**
 * print_last_digit - print the last digit.
 * @r: The integer to compute the absolute value of.
 *
 * Return: The absolute value of the integer @r.
 */
#include "main.h"
int print_last_digit(int r)
{
r = r % 10;
_putchar('0' + r);
return (abs(r));
}

