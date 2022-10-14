#include "variadic_functions.h"
#include <stdio.h>
#include <strings.h>
#include <stdarg.h>

/**
 * print_numbers - print number of integers passed into the function
 * @separator:string to be printed between numbers
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list print;
va_start(print, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(print, int));
if (separator != NULL && i < (n - 1))
{
printf("%s", separator);
}
}
va_end(print);
printf("\n");
}
