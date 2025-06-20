#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * times_table - Prints the 9 times table in two formats.
 *
 * Return: Nothing (void function).
 */
void times_table(void)
{
int x, y;
for (y = 0; y < 10; y++)
{
for (x = 0; x < 10; x++)
{
printf("%d", y * x);
printf(",  ");
}
printf("\n");  
} 
}
