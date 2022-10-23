#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free list_t list
 * @head: first node in list
 */
void free_list(list_t *head)
{
list_t *tmp;
while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp->str);
free(tmp);
}
head = NULL;
}
