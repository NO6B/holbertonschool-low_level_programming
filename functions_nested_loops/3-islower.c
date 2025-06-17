#include <ctype.h>
#include "main.h"
#include <stdio.h>
/**
 * _islower - Checks if a character is a lowercase letter
 * @c: The character to check (ASCII code)
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
