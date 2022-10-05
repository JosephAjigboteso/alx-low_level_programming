#include "main.h"
#include <stdlib.h>
/**
 * _strdup- duplicates string
 * @str: string to be duplicaated
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
char *p;
int i;
int c;
for (c = 0; str[c] != '\0'; c++)
{
if (p == NULL)
{
return (NULL);
}
p = malloc(sizeof(char) * c + 1);
}
for (i = 0; i < c; i++)
{
if (p == NULL)
{
return (NULL);
}
p[i] = str[i];
}
return (p);
}
