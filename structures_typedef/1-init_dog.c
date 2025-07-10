#include "dog.h"
/**
 * init_dog - Information about a dog
 * @d: pointeur sur l'adresse &my_dog
 * @name: dog age
 * @age: age chien
 * @owner: owner
 * Description: Longer description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
