#include "main.h"
/**
 * print_chessboard - Prints a 8x8 chessboard.
 * @a: 2D array of characters (8 columns).
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
_putchar(' ');
}
_putchar('\n');
}
}
