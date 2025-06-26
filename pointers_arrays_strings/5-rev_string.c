#include "main.h"
/**
 * rev_string - Reverses a string in place
 * @s: Pointer to the string to reverse
 */
void rev_string(char *s)
{
    int i = 0, j = 0;
    char tmp;

    
    while (s[i] != '\0')
        i++;

    
    i--; 
    while (j < i)
    {
        tmp = s[j];
        s[j] = s[i];
        s[i] = tmp;
        j++;
        i--;
    }
}