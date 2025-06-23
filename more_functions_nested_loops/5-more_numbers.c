#include "main.h"

void more_numbers(void)
{
int y;
int x;
for ( y= 0; y < 10; y++)
{
 for (x = 0; x < 15; x++)
{
    _putchar((x / 10) + '0');
    _putchar((x % 10) + '0');
}
    _putchar('\n');   
}

}