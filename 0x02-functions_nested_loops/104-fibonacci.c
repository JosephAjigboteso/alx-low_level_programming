#include <stdio.h>

/**
 * main - main function
 *
 * Return: nothing
 *
 */
int main(void)
{

int a = 1;
int b = 2;
int i;
int counter = 98;
int c;
printf("%d, ", a);
printf("%d, ", b);
for (i = 1; i <= 98; i++)
{
c = a + b;
a = b;
b = c;
printf("%d, ", c);
}
return (0);
}
