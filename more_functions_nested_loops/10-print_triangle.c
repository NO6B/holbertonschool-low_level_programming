#include "main.h"
/**
 * print_triangle - Prints a right-aligned triangle with '#'
 * @size: Height of the triangle
 */
void print_triangle(int size)
{ 
  if (size <= 0)
    _putchar('\n');
    
     int i, j;
    for (i = 0; i < size; i++)
    {
    int k;
    for (k = size; k > i; k--)
    {
    _putchar(' ');
    }
    for (j = 0; j <= i; j++)
    {
    _putchar('#');
    }      
    _putchar('\n');

  }
}