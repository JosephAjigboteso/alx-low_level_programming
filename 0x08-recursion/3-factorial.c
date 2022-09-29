#include "main.h"

/**
 * factorial - gets factorial of an integer n
 * @n: integer to be calculated
 * Return: factorial n
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
