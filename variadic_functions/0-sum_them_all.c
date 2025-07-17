#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all that returns the sum of all its parameters
 *
 * @n: is arguments list
 *
 * Return: Sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int sm = 0;
if (n == 0)
return (0);
va_start(args, n);
for (i = 0; i < n; i++)
sm += va_arg(args, int);
va_end(args);
return (sm);
}
