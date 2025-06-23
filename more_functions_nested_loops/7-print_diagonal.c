#include "main.h"
/**
 * print_diagonal - Draws a diagonal.
 * @n: The number of '\' characters to print.
 * Return: Nothing.
 */
void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}