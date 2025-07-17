#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.
 * @n: is the number of integers passed to the function
 * @separator: print comma with white space
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *x;
va_list args;
va_start(args ,n);
for (i = 0; i < n; i++)
{
x = va_arg(args , char *);
printf("%s", x);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
