#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - This function prints name by calling other functions
 * @name: name to be printed
 * @f: pointer to functions
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL && name != NULL)
{
f(name);
}
}
