#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Frees a list_t linked list
 * @head: Pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
	tmp = head->next;
	free(head->str);
	free(head);
	head = tmp;
	}
}
