#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
* _isdigit - Checks if a character is a digit
* @c: The character to check
* Description: This function takes an integer c and checks if it
* represents a digit (0 through 9). It returns 1 if c is a digit,
* and 0 otherwise.
* Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
return (1);
}
else
{
return (0);
}
}
