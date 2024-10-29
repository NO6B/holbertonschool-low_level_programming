#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include "main.h"
/**
* more_numbers - Prints the numbers from 0 to 14, ten times
* Description: This function prints the numbers from 0 to 14 using a loop
* and the write function, ten times, each followed by a new line.
* Return: void
*/
void more_numbers(void)
{
int i = 0;
while (i < 10)
{
write(1, "01234567891011121314\n" ,21);
i++;   
}
}
