#include "main.h"
/**
 * reverse_array - Reverses a given array of integers
 * @a: array to reverse
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
int tmp;
int i = 0;
int j = n - 1;
while (i < j)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
i++;
j--;
}
}
