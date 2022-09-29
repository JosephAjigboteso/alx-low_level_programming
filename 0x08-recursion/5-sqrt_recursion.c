#include "main.h"
/**
 * _sqrt_recursion - gives square root of numbers
 * @n: integer n
 * Return: return square root
 */
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
if (n == 1)
{
return (1);
}
else
{
return (root(n, 1));
}
}


/**
 * root - process square root for numbers other than 1 and 0
 * @n: number
 * @i: inrementor
 * Return: answer
 */
int root(int n, int i)
{
if (n == (i * i))
{
return (i);
}
else if (n > (i * i))
{
return (root(n, i + 1));
}
else
{
return (-1);
}
}
