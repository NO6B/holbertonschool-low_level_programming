#include <stdio.h>
#include <ctype.h>
#include "main.h"
void print_numbers(void)
/** * print_numbers - prints the numbers, from 0 to 9, 
*followed by a new line 
* * Description: This function prints the numbers from 0 to 9 using a loop 
* and the _putchar function, then prints a new line. 
* * Return: void */ 
{
int i = 0;
while (i < 10)
{
_putchar(i + '0');
i++;
}
_putchar('\n');
}
