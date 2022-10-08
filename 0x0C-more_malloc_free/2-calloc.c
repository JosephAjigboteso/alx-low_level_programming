#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array nmeb elements of size bytes
 * @nmemb: array of elements
 * @size: size of bytes of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ptr;
if (nmemb == 0)
{
return (NULL);
}
if (size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < (nmemb * size); i++)
{
ptr[i] = 0;
}
return (ptr);
}
