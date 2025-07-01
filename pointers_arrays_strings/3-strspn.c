#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: String to search
 * @accept: ta
 * Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i = 0, j;

    while (s[i] != '\0')
    {
        for (j = 0; accept[j] != '\0'; j++)
            if (s[i] == accept[j])
                break;

        if (s[i] != accept[j])  /* Si on a parcouru tout accept sans trouver s[i]*/
            return i;

        i++;
    }
    return i;
}
