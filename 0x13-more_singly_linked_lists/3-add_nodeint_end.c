#include "lists.h"
/**
 * add_nodeint_end - add node to the end of list
 * @head: pointer to head pointer
 * @n: data to thye stored in new node
 * Return: address if new element of NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *endNode;
listint_t *tmp;
endNode = malloc(sizeof(listint_t));
if (endNode == NULL)
{
return (NULL);
}
endNode->n = n;
endNode->next = NULL;
if (*head == NULL)
{
*head = endNode;
return (endNode);
}
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = endNode;
return (endNode);
}
