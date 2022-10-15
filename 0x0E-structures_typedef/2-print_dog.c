#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print elements of struct dog
 * @d: pointer to use and derefernce struct
 */

void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name == NULL)
{
printf("Name: NILL\n");
}
else
{                    
printf("Name: %s\n", d->name);
}
printf("Age: %f\n", d->age);
if (d->owner == NULL)
{
printf("Owner: NILL\n");
}
else
{
printf("0wner: %s\n", d->owner);
}
}
else
return;
}
