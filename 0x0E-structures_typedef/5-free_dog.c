#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free pointer to struct dog
 * @d: pointer to dog_t
 */

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d);
free(d->name);
free(d->owner);
}
}
