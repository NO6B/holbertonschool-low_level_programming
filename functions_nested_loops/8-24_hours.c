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
int heure = 0;
int minute = 0;
for (minute = 0; minute < 24; minute++)
{
for (heure = 0; heure < 60; heure++)
{
putchar('0' + minute / 10);
putchar('0' + minute % 10);
putchar(':');
putchar('0' + heure / 10);
putchar('0' + heure % 10);
putchar('\n');
}
}
}
