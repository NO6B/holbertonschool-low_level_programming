#include "main.h"
/**
 * print_square - Prints a square of '#'
 * @size: Size of the square
 */
void print_square(int size)
{   int i;
    int j;
    if (size <= 0)
    {
        _putchar('\n');
    }
    
    for (i = 0; i < size ; i++)
    {
        for (j = 0; j < size; j++)
        {
           _putchar('#');
        }
        _putchar('\n');
    }
}
