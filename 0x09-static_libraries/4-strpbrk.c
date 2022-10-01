#include "main.h"
/**
 * _strpbrk - search string for any set of bytes
 * @s: string
 * @accept: string
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{

int i, t, j;

i = 0;

while (s[i] != '\0')

{

t = 0;

for (j = 0; accept[j] != '\0'; j++)

{

if (s[i] == accept[j])

t = 1;

}

j = 0;

if (t == 1)

return (s + i);

i++;

}

return (0);
}
