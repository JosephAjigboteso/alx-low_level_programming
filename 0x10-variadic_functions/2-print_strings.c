#include  "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <strings.h>

/**
 * print_strings - print strings
 * @separator: string to be printede between strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *string;
va_list printstrings;
va_start(printstrings, n);
for (i = 0; i < n; i++)
{
string = va_arg(printstrings, char *);
if (string == NULL)
{
printf("(nil)");
}
else
{
printf("%s", string);
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(printstrings);
printf("\n");
}
