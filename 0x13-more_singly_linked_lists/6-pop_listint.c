#include "lists.h"
/**
 *pop_listint - delete head node
 *@head: point to head node
 *Return: valur of n for head node
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
