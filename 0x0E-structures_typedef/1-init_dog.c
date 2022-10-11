#include <stdio.h>
#include "dog.h"
/**
 * init_dog - intialize variable of type struct dog
 * @d: pointer
 * @age: age of dog
 * @name: name of dog
 * @owner: name of owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
