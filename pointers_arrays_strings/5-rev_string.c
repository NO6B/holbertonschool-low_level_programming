#include "main.h"

void rev_string(char *s)
{   
    int i = 0;
    int k ,j;
    while (s[i] != '\0')
    {
        i++;
    }

    for (k = 0; s[k] != '\0' ; k++)
    {
        _putchar(s[k]);
    }
    
    for (j = i -1 ;j >= 0; j--)
    {
        _putchar(s[j]);
    }
    
}