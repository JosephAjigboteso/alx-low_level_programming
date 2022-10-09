#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - using main with arguments
 * @argc: argument count in int
 * @argv: string contaning all parameters passed for execution
 * Return: 0
 */
int main(int argc, char **argv)
{
int money, coins = 0;
if (argc == 2)
{
if (strchr(argv[argc - 1], '-'))
{
printf("0\n");
return (1);
}
money = atoi(argv[argc - 1]);
while (money > 0)
{
if (money % 25 == 0)
{
money -= 25;
}
if (money % 10 == 0)
{
money -= 10;
}
if (money % 5 == 0)
{
money -= 5;
}
if (money % 2 == 0)
{
money -= 2;
}
else
{
money--;
}
coins++;
}
printf("%d\n", coins);
return (0);
}
printf("Error\n");
return (1);
}
