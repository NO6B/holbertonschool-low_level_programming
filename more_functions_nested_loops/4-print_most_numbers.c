#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
* print_most_numbers - Prints the numbers from 0 to 9, except 2 and 4,
* followed by a new line
* Description: This function prints the numbers from 0 to 9 using a loop
* and the _putchar function, skipping 2 and 4.
* Return: void
*/
void print_most_numbers(void)
{
int i = 0;
while (i < 10)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
i++;
}
_putchar('\n');
}
