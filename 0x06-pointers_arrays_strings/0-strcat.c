#include "main.h"
/**
 * _strcat - append string src to string dest
 * @dest: first string
 * @src: string to concate first string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int a;
int b;
for (b = 0; dest[a++]; b++)
{
for (a = 0; src[a]; a++)
{
dest[b++] = src[a];
}
}
return (dest);
}

