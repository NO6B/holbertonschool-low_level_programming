#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - give memorie to tab
 * @str: tab
 * Return: if size = NULL , or coppy
 */
char *_strdup(char *str)
{
    int i;
    int j;
    char *copy;

    if (str == NULL)
        return (NULL);
    for (j = 0; str[j] != '\0'; j++)
    {}

    /*Allocation mémoire pour la copie (j + 1 pour le '\0')*/
    copy = malloc((j + 1) * sizeof(char));
    if (copy == NULL)
        return (NULL);

    for (i = 0; i < j; i++)
        copy[i] = str[i];

    return (copy);
}
