#include "lists.h"
/**
 * free_listin
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
