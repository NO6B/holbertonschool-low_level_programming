#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{ int i;
  for (i = 0; n > i ; i++)
  { 
    printf("%d, ", a[i]);
  }
}