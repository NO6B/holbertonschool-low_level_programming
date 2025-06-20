#include "main.h"

/**
 * times_table - print .
 *
 * Return : void.
 */
void times_table(void)
{
    int x, y, r;

    for (y = 0; y < 10; y++)
    {
        for (x = 0; x < 10; x++)
        {
            r = x * y;

            if (x != 0)
                _putchar(',');
            _putchar(' ');

            if (r < 10)
                _putchar(' ');
            else
                _putchar((r / 10) + '0');

            _putchar((r % 10) + '0');
        }
        _putchar('\n');
    }
}
