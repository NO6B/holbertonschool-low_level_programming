/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
#include "main.h"
#include <stdio.h>
void print_alphabet_x10(void)
{
char c = 'a';
int count = 0;
while (count < 10)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
count++;
}
}
