#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees a dog_t structure and its allocated fields
 * @d: pointer to the dog_t to free
 */
void free_dog(dog_t *d)
{
if (d == NULL)
{
return (NULL);
}  
free(d->name);
free(d->owner);
free(d);
}
