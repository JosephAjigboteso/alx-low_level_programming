#include "lists.h"
/**
 * listint_len - returns number of elements in a linked list
 * @h: equal to the head first address of list
 * Return: number of elemets in the list
 */
size_t listint_len(const listint_t *h)
{
unsigned int num = 0;
while (h != NULL)
{
h = h->next;
num++;
}
return (num);
}
