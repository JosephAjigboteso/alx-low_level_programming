#include "main.h"
/**
 * _memset - filles first n bytes of a memory to pointed to by s
 * @s: pointer of the memory to be filled
 * @b: use to fill memory
 * @n: determine number of bytes
 * Return: returns pointer
 **/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
