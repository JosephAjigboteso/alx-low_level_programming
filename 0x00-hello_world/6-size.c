#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

char c;
int i;
long li;
long long lli;
float f;
printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(li));
printf("Size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(lli));
printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(f));
return (0);

}
