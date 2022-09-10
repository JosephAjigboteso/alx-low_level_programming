#include <stdio.h>
/**
 * main - print all hexadecimal numbers
 *
 * Description: using the main function
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned char a = '0';
int i;

for (i = 0; i < 10; i++)

{
putchar(a);

a++;

}
a = '1';

for (i = 0; i < 6; i++)
{

putchar('0' + a);

a++;

}
putchar('\n');
return (0);

}

