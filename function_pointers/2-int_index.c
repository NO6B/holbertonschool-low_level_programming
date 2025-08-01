#include <stdlib.h>
/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: is the size of the array
 * @cmp: cmp is a pointer to the function to be used to compare values
 * Return: If no element matches, return -1 if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || size <= 0 || cmp == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}
