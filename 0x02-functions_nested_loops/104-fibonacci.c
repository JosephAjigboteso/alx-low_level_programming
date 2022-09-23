#include <stdio.h>
/**
 * main - main function
 * Return: nothing
 */

int main(void)
{
int a = 1;
int b = 2;
int c;
int i;
int counter = 98;
printf("%d, %d, ", a, b);
for (i = 1; i <= 98; i++)
{
c = a + b;
a = b;
b = c;
printf("%d, ", c);
}
return (0);
}
