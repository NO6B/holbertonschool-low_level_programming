#include "main.h"
#include <stdlib.h>
/**
 * create_array - give memorie to tab
 * @c: Memory area
 * @size: size of tab
 * Return: if size = 0 NULL , or array
 */
char *create_array(unsigned int size, char c)
{
char *tab;
unsigned int i;
if (size == 0)
return (NULL);
tab = malloc(size * sizeof(char));
if (tab == NULL)
return (NULL);
for (i = 0; i < size; i++)
tab[i] = c;
return (tab);
}
