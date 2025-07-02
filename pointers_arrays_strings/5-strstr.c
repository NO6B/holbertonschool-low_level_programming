#include "main.h"
#include <stdio.h>
/**
 * _strstr - Locates a substring in a string.
 * @haystack: The main string to search in.
 * @needle: The substring to search for.
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
<<<<<<< HEAD
    int i;
    int j;
    for (i = 0; haystack[i] != '\0'; i++) /* hello world*/
    {
        for (j = 0; needle[j] != '\0'; j++)/*world*/
        {
            if (haystack[i + j] != needle[j])
                break;
        }
        if (needle[j] =='\0')
        {
            return(&haystack[i]);
        }
          
    }
    return (NULL);
=======
int i;
int j;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (needle[j] == '\0')
{
return (&haystack[i]);
}
}
return (NULL);
>>>>>>> 4d56048bd99ac5c864cc85d75d8f92de7669823f
}
