#include <stdlib.h>
/**
 * alloc_grid - creates a 2D int grid
 * @width: columns
 * @height: rows
 * Return: pointer to grid or NULL
 */
int **alloc_grid(int width, int height)
{
int **tab, i, j;
if (width <= 0 || height <= 0)
return (NULL);
tab = malloc(height * sizeof(int));
for (i = 0; i < height; i++)
{
tab[i] = malloc(width * sizeof(int));
if (tab== NULL)
return (NULL);
for (j = 0; j < width; j++)
tab[i][j] = 0;
}
return (tab);
}
