#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural numbers from n to 98
 * @n:parameter to start function
 *
 * Return: 0
 */
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (n != 98)
{
printf(",");

}

}

}

else
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (n != 98)
{
printf(",");	}

}
}
printf("\n");
}
