#include <stdio.h>

/**
 * main - print alphabets from z to a
 *
 * Descripttion: using the main function
 * Return: Always 0 (Success)
 */
int main(void)

{

char a;

for (a = 'z'; a >= 'a' ; a--)

putchar(a);

putchar('\n');
return (0);

}
