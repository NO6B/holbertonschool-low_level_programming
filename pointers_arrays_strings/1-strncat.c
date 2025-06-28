#include "main.h"
/**
 * _strncat - Concatenates two strings up to n bytes from src.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Max bytes from src.
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{   
    int i = 0;
    int j = 0;
    while (dest[j] != '\0')
    {
        j++;
    } 
    while (src[i] != '\0' && i < n)
    {  
        dest[j] = src[i];
        j++;
        i++;
    }
    dest[j] = '\0';
    return dest;
}