#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
int count = 0;
char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
while (count < 10)
{
  write(1, alphabet, 27);
count++;
}
}
