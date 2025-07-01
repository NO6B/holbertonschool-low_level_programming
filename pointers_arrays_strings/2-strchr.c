#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locate first occurrence of char in string
 * @s: String to search
 * @c: Char to find
 * Return: Pointer to first occurrence or NULL
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return &s[i];
}
return NULL;
}
