#include <stdio.h>

/**
 * main - main function
 *
 * Return: nothing
 *
 */
int main(void)
{
int counter = 2;
float a = 1;
float b = a + 1;
float c = a + b;
printf("%.0f, ", a);
printf("%.0f, ", b);
while (counter < 98)
{
counter++;
a = b;
b = c;
c = a + b;
printf("%.0f", c);
if (counter < 98)
{
printf(", ");
}
}
printf("\n");
return (0);
}
