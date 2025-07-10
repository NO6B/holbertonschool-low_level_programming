#include <stdlib.h>
#include "main.h"
/**
 * array_range - function that creates an array of integers.
 * @min: The starting integer
 * @max: The ending integer
 * Return: Pointer to the new array, or NULL on failure
 */
int *array_range(int min, int max)
{
int *tab;
int i;
tab = malloc(sizeof(int) * (max - min + 1));
if (tab == NULL)
return (NULL);
for (i = 0; i <= max - min; i++)
{
tab[i] = min + i;
}
return (tab);
}
