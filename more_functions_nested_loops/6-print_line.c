#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
* print_line - Draws a straight line in the terminal
* @n: The number of times the character _ should be printed
* Description: This function prints a line using the character _.
* If n is 0 or less, it only prints a newline.
* Return: void
*/
void print_line(int n)
{
int i = 0;
if (n <= 0)
{
_putchar('\n');
}
else
{
while (i < n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
}
