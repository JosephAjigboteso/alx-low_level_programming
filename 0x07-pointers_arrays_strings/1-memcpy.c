#include "main.h"
/**
 * _memcpy - copy n bytes from src to dest
 * @src: memory area to copy bytes from
 * @dest: memory area to paste bytes to
 * @n: determines number of bytes
 * Return: dest
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
