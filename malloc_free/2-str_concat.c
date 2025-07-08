#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * Return: Pointer to new string, or NULL.
 */
char *str_concat(char *s1, char *s2)
{
    int i = 0, j = 0, k, l;
    char *tab;

    while (s1[i] != '\0')
        i++;  /*i = longueur de s1*/

    while (s2[j] != '\0')
        j++;  /*j = longueur de s2 */

    tab = malloc((i + j + 1) * sizeof(char));
    if (tab == NULL)
        return (NULL);

    /*Copier s1 dans tab*/
    for (k = 0; k < i; k++)
        tab[k] = s1[k];

    /*Copier s2 dans tab à la suite*/
    for (l = 0; l < j; l++)
        tab[k + l] = s2[l];

    tab[k + l] = '\0'; /*Terminer la chaîne*/

    return (tab);
}
