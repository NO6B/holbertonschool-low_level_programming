#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 *
 * Numbers are printed in order, separated by a comma and space.
 * The last number printed is 98, followed by a new line.
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
printf("98\n");
}
else
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
printf("98\n");
}
}
