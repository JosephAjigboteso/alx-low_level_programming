#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - function calling other functions
 * @array: array of elements
 * @size:size of the array
 * @action: pointer to the functions
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (action != NULL && array != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
else
{
exit(EXIT_FAILURE);
}
}
