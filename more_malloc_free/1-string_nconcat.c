#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: Pointer to new string, or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *tab;
unsigned int j, k, i, m;
for (i = 0; s1[i] != '\0'; i++)
{}
for (j = 0; s2[j]; j++)
{}
if (n < j)
j = n;
tab = malloc(i + j + 1);
if (tab == NULL)
{
return (NULL);
}
/*rajoute s1 dans tab*/
for (k = 0; k < i ; k++)
{
tab[k] = s1[k];
}
/*rajoute s2 a la suite de tab*/
for (m = 0; m < j; m++)
tab[k + m] = s2[m];
tab[i + j] = '\0';
return (tab);
}
