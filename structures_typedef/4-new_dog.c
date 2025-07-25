#include "dog.h"
#include <stdlib.h>
/**
 * len - Gets length of a string
 * @src: String input
 *
 * Return: Length + 1 for '\0'
 */
int len(char *src)
{
int i = 0;
while (src[i] != '\0')
{
i++;
}
return (i + 1);
}
/**
 * ctr - Copies a string
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to dest
 */
char *ctr(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
/**
 * new_dog - Allocates and initializes a new dog_t instance
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to the allocated dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;/*ajout dun nouveau pointeur a la structure dog_t*/
char *new_name;
char *new_owner;
new_name = malloc(len(name));
if (new_name == NULL)
{
return (NULL);
}
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
free(new_name);
return (NULL);
}
new_owner = malloc(len(owner));
if (new_owner == NULL)
{
free(new_dog);
free(new_name);
return (NULL);
}
ctr(new_name, name);
ctr(new_owner, owner);
/*
*new_dog est un pointeur qui permet
*d’assigner à la structure dog_t l’adresse de
*new_name dans son champ name
*/
new_dog->name = new_name;
new_dog->owner = new_owner;
new_dog->age = age;
return (new_dog);
}
