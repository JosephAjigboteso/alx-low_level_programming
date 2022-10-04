#include "main.h"
#include <stdlib.h>
/**
 * create_array - pointer to first string character
 * @size: size of array
 * @c: character to filled array with
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;
p = malloc(sizeof(char) * size);
if (size == 0)
{
return (NULL);
}
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
p[i] = c;
}
return (p);
}
