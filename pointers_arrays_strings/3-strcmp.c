#include <stdio.h>
#include "main.h"
int _strcmp(char *s1, char *s2)
{
    int i;

    for (i = 0; s1[i] != '\0' && s2[i] != '\0' ; i++)
    {
        if (s1[i] != s2[i])
        {
        printf("les premiers cara sont similaire\n");
        }
        if ( s1[i] != s2[i])
        printf("les premiers cara ne sont pas similaire\n");

       
    }
    return (s1[i] - s2[i]);
}

