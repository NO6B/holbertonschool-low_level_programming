#include "main.h"
/**
 * more_numbers - Prints 0 to 14 ten times, followed by a new line
 */
void more_numbers(void)
{
int y;
int x;
for (y = 0; y < 10; y++)
{
for (x = 0; x < 15; x++)
{
if (x > 9)
{
_putchar((x / 10) + '0');
}
_putchar((x % 10) + '0');
}
_putchar('\n');
}
}
