#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: Nothing (void function).
 */
void times_table(void)
for (int y = 0; y < 10 ; y++)
{
for (int x = 0; x < 10 ; x++)
{
printf("%d ", y * x);
}
printf("\n");
}
