#include "lists.h"
/**
 *pop_listint_t - delete hrad node
 *@head: point to head node
 */
 int pop_listint(listint_t **head)
{
listint_t *tmp;
int num = 0;
if (*head == NULL)
{
return (num);

}
tmp  = *head;
num = tmp->n;
free(*head);
*head = tmp->next;
return (num);
}
