#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
* print_numbers - function that prints all numbers from
* 0 to 9
* Description: This function prints the numbers from 0 to 9 using a loop
* and the _putchar function.
* Return: returns nothing
*/
void print_numbers(void)
{
int i = 0;
while (i < 10)
{
_putchar(i + '0');
i++;
}
_putchar('\n');
}
