#include "main.h"
/**
 * _strncpy - Copies function
 * @dest: Destination
 * @src: Source
 * @n: Maximum number
 * Return: Pointer to the destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
