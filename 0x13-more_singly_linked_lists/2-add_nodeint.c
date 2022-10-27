#include "lists.h"
/**
 * add_nodeint - add node at the beginning of list
 * @head: pointer to pointer head whuch is thye node to be added
 * @n: data to be added
 * Return: address of new element of NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
{
return NULL;
}
newNode->n = n;
newNode->next = *head;
*head = newNode;
return (*head);
}
