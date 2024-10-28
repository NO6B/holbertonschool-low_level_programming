#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
* _isupper - Checks if a character is uppercase
* @c: The character to check
* Description: This function takes an integer c, checks if it is an uppercase
* letter using the isupper function from ctype.h, and returns 1 if it is
* uppercase or 0 if it is not.
* Return: 1 if uppercase, 0 otherwise
*/
int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
{
return (0);
}
}
