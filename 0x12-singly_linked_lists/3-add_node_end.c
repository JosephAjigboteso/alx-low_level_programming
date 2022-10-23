#include "lists.h"
#include <string.h>
/**
 * add_node_ end add a node at the end of the list
 * @head: pointer to pointer 
 * @str: value of node
 * Return: address of new elemnt of NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *last;
list_t *temp;
int i = 0;
while (str[i] != '\0')
{
i++;
}
last = malloc(sizeof(list_t));
if (last == NULL)
{
return (NULL);
}
last->str = strdup(str);
last->len = i;
last->next = NULL;
if (strdup(str) == NULL)
{
free(last);
return (NULL);
}
if (*head == NULL)
{
*head = last;
return (last);
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
temp->next = last;
}
return (last);
}
}
