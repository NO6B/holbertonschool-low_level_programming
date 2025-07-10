#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Allocates memory for an array and initializes it to zero
 * @nmemb: Number of elements
 * @size: Size of each element
 * Return: Pointer to the allocated memory or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *tab;
unsigned int i;
char *c;
if (nmemb == 0 || size == 0)
{
return (NULL);
}    
tab = malloc(size * nmemb);
if (tab == NULL)
return (NULL);
c = (char *)tab;
/*initialiser manuellement chaque element du tableau à 0 */
for (i = 0; i < nmemb * size; i++)
c[i] = 0;
return (tab);
}
