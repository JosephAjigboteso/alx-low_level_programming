#include "lists.h"
#include <string.h>
/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: pointer to pointer of list
 * @str: adata to store in new node
 * Return: the address of new node or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
int i;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
i++;
}
new_node->str = strdup(str);
new_node->len = i;
new_node->next = *head;
*head = new_node;
return (new_node);
}
