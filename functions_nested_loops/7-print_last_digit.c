#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
* print_last_digit - Prints the last digit of a number
* @r: The number to extract the last digit from
* Description: This function takes an integer r and returns its
* last digit by computing the remainder of r when divided by 10.
* Return: The last digit of the integer r
*/
int print_last_digit(int r)
{
int i = (r % 10 );
return (i);
}
