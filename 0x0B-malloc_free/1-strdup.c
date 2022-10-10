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
if (str == NULL)
{
return (NULL);
}
c = 1;
while (str[c] != '\0')
{
c++;
}
p = malloc(sizeof(char) * c);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < c; i++)
{
p[i] = str[i];
}
return (p);
}
