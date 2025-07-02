#include "main.h"
#include <stdio.h>
/**
 * _strstr - Locates a substring in a string.
 * @haystack: The main string to search in.
 * @needle: The substring to search for.
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int j;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] == haystack[i + j]; j++)
{
return &haystack[i];
}    
}
return (NULL);
}
