#include <ctype.h>
#include "main.h"
#include <stdio.h>
/**
 * _isalpha - Checks if a character is a lowercase letter or uppercase
 * @c: The character to check (ASCII code)
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
