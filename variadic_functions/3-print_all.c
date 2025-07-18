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
    char *sep = "";

    va_start(args, format);
    while (format[i] != '\0')
    {
        switch (format[i])
        {
            case 'c':
                printf("%s%c", sep, va_arg(args, int));
                break;
            case 'i':
                printf("%s%d", sep, va_arg(args, int));
                break;
            case 'f':
                printf("%s%f", sep, va_arg(args, double));
                break;
            case 's':
                s = va_arg(args, char *);
                if (s == NULL)
                    s = "(nil)";
                printf("%s%s", sep, s);
                break;
            default:
                i++;
                continue;
        }
        sep = ", ";
        i++;
    }
    va_end(args);
    printf("\n");
}

