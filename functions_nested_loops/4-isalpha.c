#include <stdio.h>
#include <ctype.h>
/**
* _isalpha - Checks if a character is an alphabet
* @c: The character to check
*
* Return: 1 if an alphabet, 0 otherwise
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
