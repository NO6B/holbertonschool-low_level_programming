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
int i = 0, j;
    char *s;
    char *separator = "";

    va_start(args, format);
    while (format && format[i] != '\0')
    {
        switch (format[i])
        {
            case 'c':
                printf("%s%c", separator, va_arg(args, int));
                break;
            case 'i':
                printf("%s%d", separator, va_arg(args, int));
                break;
            case 'f':
                printf("%s%f", separator, va_arg(args, double));
                break;
            case 's':
                s = va_arg(args, char *);
                if (s == NULL)
                    s = "(nil)";
                printf("%s%s", separator, s);
                break;
            default:
                i++;
                continue;
        }
        separator = ", ";
        i++;
    }
    va_end(args);
    printf("\n");
}

