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
    int i = 0;
    float f;
    char *s;
    int j;
    char c;
    va_list args;
    va_start(args, format);
    
   while (format[i] != '\0')
   {
    if (format[i] == 'c')
    {
        c = va_arg(args, int);
        printf("%c, ", c);
    }
    else if (format[i] == 'i')
    {
        j = va_arg(args, int);
        printf("%d, ", j);
    }
    else if (format[i] == 'f')
    {
        f = va_arg(args, double);
        printf("%f, ", f);
    }
    else if (format[i] == 's')
    {
        s = va_arg(args, char*);
        if (s == NULL)
            printf("(nil)");
        else
            printf("%s", s);
    }    
    i++;
   }

    va_end(args);
    printf("\n");
}
