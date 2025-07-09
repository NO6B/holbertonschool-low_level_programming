#include <stdlib.h>

int **alloc_grid(int width, int height)
{
    int **g, i, j;

    if (width <= 0 || height <= 0)
        return NULL;

    g = malloc(height * sizeof(*g));

    for (i = 0; i < height; i++)
    {
        g[i] = malloc(width * sizeof(**g));
        if (!g[i])
        {
            while (i--)
                free(g[i]);
            free(g);
            return NULL;
        }
        for (j = 0; j < width; j++)
            g[i][j] = 0;
    }
    return g;
}
