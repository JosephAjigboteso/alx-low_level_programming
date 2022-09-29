#include "main.h"

/**
 * _pow_recursion - solves x raised to the power y
 * @x: base integer
 * @y: power integer
 * Return: return result
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
