#include <stdio.h>
/**
 * main - print numbers of base 10 using putchar
 *
 * Description: usint the main function
 * Return: Always 0
 */
int main(void)
{
int num;

for (num = '0'; num <= '9'; num++)
{
putchar((num % 10) + '0');
}
putchar('\n');

return (0);

}
