#include "lists.h"
/**
 * free_listint - frees list
 * @head: contains address if first node;
 */
void free_listint(listint_t *head)
{
listint_t *tmp;
while (head != NULL)
{
tmp = head;
free (tmp);
head = head->next;
}
}
