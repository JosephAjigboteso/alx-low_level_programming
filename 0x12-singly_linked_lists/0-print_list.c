#include "lists.h"
#include <string.h>
/**
 * print_list - print all elements of a list_t list
 * @h: pointer to list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
int number = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[%d] %s\n", 0, "(nil)");
}
else
{
printf("[%ld] %s\n", strlen(h->str), h->str);
}
h = h->next;
number++;
}
return (number);
}
