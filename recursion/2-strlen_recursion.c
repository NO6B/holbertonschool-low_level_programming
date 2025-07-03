#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to measure.
 * Return: length of s.
 */
int _strlen_recursion(char *s)
{
<<<<<<< HEAD
 
    if (*s == '\0')
    {
        return 0;
    }

    return 1 + _strlen_recursion(s + 1);
    
}
=======
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
>>>>>>> 6a0306783a85d981bd3553822dc1b16342f8a7fb
