#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of strings
 * @min: starting point
 * @max: end string point
 * Return: pointer t the array
 */

int *array_range(int min, int max)
{
int *ptr;
int i, len;
if (min > max)
{
return (NULL);
}
for (i = min; i <= max; i++)
{
len++;
}
ptr = malloc(sizeof(int) * len);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
ptr[i] = min;
min++;
}
return (ptr);
}
