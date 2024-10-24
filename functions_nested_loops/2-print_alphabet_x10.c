#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
    int count = 0;

    while (count < 10)
    {
        char i = 'a';
        while (i <= 'z')
        {
            putchar(i);
            i++;
        }
        putchar('\n');
        count++;
    }
}
