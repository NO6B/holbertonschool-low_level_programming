#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything.
 * @format: format is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *s;

va_start(args, format);
while (format[i] != '\0')
{
if (format[i] == 'c' || format[i] == 'i'
|| format[i] == 'f' || format[i] == 's')
{
switch (format[i])
{
case 'c':
printf("%c, ", va_arg(args, int));
break;
case 'i':
printf("%d, ", va_arg(args, int));
break;
case 'f':
printf("%f, ", va_arg(args, double));
break;
case 's':
s = va_arg(args, char *);
if (s == NULL)
printf("(nil)");

printf("%s", s);
}
}
i++;
}
va_end(args);
printf("\n");
}
