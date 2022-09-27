#include "main.h"
/**
 * _strchr - looks for character c in string s
 * @s: string containing character c
 * @c: character to be found
 * Return: pointer if c is found or NULL if not
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
{
return (s);
}
else
return ('\0');
}
