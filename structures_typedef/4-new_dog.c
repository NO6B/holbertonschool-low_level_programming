#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * struct dog - Structure that defines a dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog (in years)
 * @owner: Pointer to the name of the dog's owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t *new_dog;
    char * new_name;
    char * new_owner;
    new_name = malloc(strlen(name));
    if (new_name == NULL)
      return NULL;
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return NULL;
    new_owner=malloc(strlen(owner));
    if (new_owner == NULL)
        return NULL;
    strcpy(new_name, name);
    strcpy(new_owner, owner);
    new_dog ->name = new_name;
    new_dog ->owner = new_owner;
    new_dog ->age = age;
    return new_dog;
}
