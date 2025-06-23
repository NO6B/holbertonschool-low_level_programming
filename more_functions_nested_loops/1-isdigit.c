#include "main.h"
/**
 * _isdigit - Checks for digit character
 * @c: The digit to check
 *
 * Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
int i;
for (i = '0'; i <= '9'; i++)
{
if (c == i)
return (1);
}
return (0);
}
