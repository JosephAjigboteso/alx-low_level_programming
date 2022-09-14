#include "main.h"

/**
 * print_sign -main function
 *
 * @n: character to compare
 * Return: 1 if n is positive, 0 when n is 0 and -1 when n is negative
 */
int print_sign(int n)
{

if (n > 0)
{ _putchar('+');
return (1);  }
if (n == 0)
{ _putchar('0');
return (0); }

_putchar('-');
return (-1);
}
