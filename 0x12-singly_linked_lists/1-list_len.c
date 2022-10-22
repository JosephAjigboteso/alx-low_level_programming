#include "lists.h"
/**
 * list_len - length of list
 * @h: pointer to struct list_t
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
int count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
