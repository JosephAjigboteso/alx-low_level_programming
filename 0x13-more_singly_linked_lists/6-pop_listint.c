#include "lists.h"
/**
 *pop_listint_t - delete hrad node
 *@head: point to head node
 */
 int pop_listint(listint_t **head)
{
listint_t *tmp;
int num;
if (*head == NULL)
{
return (0);
}
tmp  = *head;
free(*head);
*head = tmp->next;
num = tmp->n;
return (num);
}
