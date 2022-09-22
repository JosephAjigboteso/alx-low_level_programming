#include "main.h"
/**
 * strncpy - copy strings
 * @dest: first string
 * @src: second string
 * @n: number of times
 * Return: value of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}