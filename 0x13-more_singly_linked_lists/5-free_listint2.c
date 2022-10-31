#include "lists.h"
/**
 * free_listint2 - free list
 * @head: pointet to pointer of first node
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;
if (*head == NULL)
{
return;
}
while (*head != NULL)
{
tmp = *head;
free(*head);
*head = tmp->next;
}
*head = NULL;
}
