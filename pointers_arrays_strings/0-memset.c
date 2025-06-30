#include "main.h"
/**
 * _memset - Fill memory with a constant byte
 * @s: Memory area
 * @b: Byte to fill
 * @n: Number of bytes
 * Return: Pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
