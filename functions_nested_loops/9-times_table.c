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
int k, j;
for (y = 0; y < 10; y++)
{
for (x = 0; x < 10; x++)
{
printf("%d", y * x);
if (x < 9)
printf(",  ");
}
printf("\n");  
} 
for (k = 0; k < 10; k++)
{
for (j = 0; j < 10; j++)
{
printf("%d", k * j);
if (j < 9)
printf(",..");
}
printf("\n");
}
}
