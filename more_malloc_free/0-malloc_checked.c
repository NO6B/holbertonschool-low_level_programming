#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: int
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
int *ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
