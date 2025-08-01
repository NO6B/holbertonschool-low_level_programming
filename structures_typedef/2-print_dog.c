#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints a struct dog
 * @d: Pointer to struct dog
 * Description: Prints name, age, and owner. If any is NULL, print (nil).
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;

    if (d->name == NULL)
        printf("Name: (nil)\n");
    else
        printf("Name: %s\n", d->name);

    printf("Age: %f\n", d->age);

    printf("Owner: %s\n", d->owner);
}
