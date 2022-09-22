#include "main.h"
/**
 * _strcat - append string src to string dest
 * @dest: first string
 * @src: override string dest
 * Return: pointer to string dest
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;
for (j = 0; dest[j] != '\0'; j++)
{
for (i = 0; src[i] != '\0'; i++)
{
dest[j + i] = src[i];
}
}
return (dest);
}
