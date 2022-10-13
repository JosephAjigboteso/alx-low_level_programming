#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - add all possible args
 * @n: first arg
 * Return: return sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
va_list SumofArgs;
int sum = 0;
if (n == 0)
{
return (0);
}
va_start(SumofArgs, n);
for (i = 0; i < n; i++)
{
sum += va_arg(SumofArgs, int);
}
return (sum);
}
