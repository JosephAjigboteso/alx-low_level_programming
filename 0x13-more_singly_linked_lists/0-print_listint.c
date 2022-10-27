#include "lists.h"
/**
 * print_listint - print all the elements of a list
 * @h: first pointer which us equal to the head of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
unsigned int i, node = 0;
if (h == NULL)
{
return (0);
}
for (i = 0; h != NULL; i++)
{
printf("%d\n", h->n);
h = h->next;
node++;
}
return (node);
}
