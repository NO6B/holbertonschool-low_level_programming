#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - print minute of the day of .
 * void : The integer to compute the absolute value of.
 *
 * void.
 */
void jack_bauer(void)
{
int h = 0;
int m = 0;
for (h = 0; h < 24; h++)
{
for (m = 0; m < 60; m++)
{
_putchar('0' + h / 10);
_putchar('0' + h % 10);
_putchar(':');
_putchar('0' + m / 10);
_putchar('0' + m % 10);
_putchar('\n');
}
}
}
