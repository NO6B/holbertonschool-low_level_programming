#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
/**
* print_square - Prints a square, followed by a new line.
* @size: The size of the square
* Description: This function prints a square using the character #.
* If size is 0 or less, it only prints a new line.
* Return: void
*/
void print_square(int size)
{
if (size <= 0)
{
write(1, "\n", 1);
}
else
{
int h, l;
for (h = 0; h < size ; h++)
{
for (l = 0; l < size; l++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
