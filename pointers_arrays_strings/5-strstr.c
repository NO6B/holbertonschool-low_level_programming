#include "main.h"
#include <stdio.h>
char *_strstr(char *haystack, char *needle)
{
    int i;
    int j;
    for (i = 0; haystack[i] != '\0'; i++)
    {
        for (j = 0; needle[j] == haystack[i + j]; j++)
        {
            return &haystack[i];

        }
        
    }
    return NULL;
}