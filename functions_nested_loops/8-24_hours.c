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
for (m = 0; m < 24; m++)
{
for (h = 0; h < 60; h++)
{
putchar('0' + m / 10);
putchar('0' + m % 10);
putchar(':');
putchar('0' + h / 10);
putchar('0' + h % 10);
putchar('\n');
}
}
}
