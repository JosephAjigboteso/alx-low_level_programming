#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index- searches for an integer by calling other functions
 * @array: array of numbers
 * @size: number of elements in the array
 * @cmp: pointer to functions
 * Return: returns i if cmp doesnt return 0 or -1 if otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || array == NULL || cmp == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}
