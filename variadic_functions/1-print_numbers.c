#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers
 * @n: is the number of integers passed to the function
 * @separator: print comma with white space
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
int x;
unsigned int i;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
x = va_arg(args, int);
printf("%d", x);
/*affiche le separateur seulement si ce nest pas le dernier nombre*/
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
