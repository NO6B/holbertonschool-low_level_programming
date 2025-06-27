#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 * Return: Pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[j] != '\0')
{
j++;
}
while (src[i] != '\0')
{
dest[j] = src[i];
j++;
i++;
}
dest[j] = '\0';
return (dest);
}
