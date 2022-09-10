#include <stdio.h>
/**
 * main - print numbers of base 10 using putchar
 *
 * Description: usint the main function
 * Return: Always 0
 */
int main(void)
{
int a = 0;

for (; a < 10; a++)
{
putchar('0' + a);

}
putchar('\n');

return (0);

}
