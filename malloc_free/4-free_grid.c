#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees to the memory 
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
        free(grid);
}