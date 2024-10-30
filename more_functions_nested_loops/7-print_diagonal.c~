#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
* print_diagonal - Draws a diagonal line on the terminal
* @n: The number of times the character \ should be printed
* Description: This function prints a diagonal line using the character \.
* If n is 0 or less, it only prints a newline.
* Return: void
*/
void print_diagonal(int n)
{
if (n <= 0)
{
putchar('\n');
}
else
{
for (int i = 0; i < n; i++)
{
for (int j = 0; j < i; j++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
}
}
