#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
void print_all(const char * const format, ...)
{
    int i = 0;
    int j;
    va_list args;
    va_start(args, format);
    
   while (format[i] != '\0')
   {
    if (format[i] == 'c')
    {
        char c = va_arg(args, char);
        printf("%s", c);
    }
    else if (format[i] == 'i')
    {
        int i = va_arg(args, int);
        printf("%d", i);
    }
    else if (format[i] == 'f')
    {
        float f = va_arg(args, float);
        printf("%f", f);
    }
    else if (format[i] == NULL)
    {
        return;
    }
    i++;
   }
   
    va_end(args);
    printf("\n");
}