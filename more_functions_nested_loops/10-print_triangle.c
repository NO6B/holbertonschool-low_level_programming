#include <stdio.h>
/**
 * print_triangle - Prints a right-aligned triangle with '#'
 * @size: Height of the triangle
 */
void print_triangle(int size)
{int i, j;
    for (i = 0; i < size; i++)
    {
    int k;
    for (k = size; k > i; k--)
    {
    printf(" ");
    }
    for (j = 0; j <= i; j++)
    {
    printf("#");
    }
    printf("\n");
    }
}
