#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to memory allocated to s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
int a, b, i;
char *my_array;
a = 0;
b = 0;
i = 0;
while (s1[i] != '\0')
{
i++;
a++;
}

while (s2[i] != '\0')
{
i++;
b++;
}

my_array = malloc(sizeof(char) * (a + b + 1));
if (my_array == NULL)
{
return (NULL);
}
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (i < a)
{
my_array[i] = s1[i];
i++;
}
while (i < b)
{
my_array[i + a] = s2[i];
i++;
}
my_array[i + a] = '\0';
return (my_array);
}
