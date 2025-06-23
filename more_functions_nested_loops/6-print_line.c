#include "main.h"
/**
 * print_line - Draws a straight line using underscores.
 * @n: The number of '_' characters to print.
 * Description: Prints a line of underscores followed by a newline.
 * If n is 0 or less, only the newline is printed.
 * Return: Nothing.
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
