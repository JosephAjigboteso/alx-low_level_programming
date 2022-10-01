#include <stdio.h>

/**
 * main - print command executuon strings
 * @argc: detemines number of argumets passed when executing file
 * @argv: prints the strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s", argv[i]);
}
printf("\n");
return (0);
}
