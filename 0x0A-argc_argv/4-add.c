#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * Stringcheck - check string
 * @s: string to check
 * Return: 1 or 0
*/

int Stringcheck(char *s)

{
int i = 0;
for (; s[i] != '\0'; i++)
{
if (!isdigit(s[i]))
{
return (0);
}
}
return (1);
}




/**
 * main - using main function
 * @argc: print number of arguments entered in terminal
 * @argv: print strings of argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int i, result = 0;
if (argc == 1)
{
printf("%d\n", 0);
}
else
{
for (i = 1; i < argc; i++)
{
if (Stringcheck(argv[i]))
{
result += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", result);
}
return (0);
}
