#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat -  function that allocates memory for an array,
 * @size : size of tab
 * Return: Pointer, or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *tab;
unsigned int i;
if (nmemb ==0 || size == 0)
{
return (NULL);
}
tab = malloc(nmemb * size);
if (tab == NULL)
{
return (NULL);
}
/*initialiser manuellement chaque element du tableau à 0 */
for (i = 0; i < nmemb; i++)
tab[i] = 0;
return (tab);
}
