#include <stdio.h>
/**
 * main - using main function
 * @argc: prints number of arguments
 * @argv: prints argumets as strin
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
