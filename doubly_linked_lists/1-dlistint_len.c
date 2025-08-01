#include "lists.h"
#include <stdlib.h>
/**
 * dlistint_len - Counts the number of elements in a dlistint_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
	h = h->next;
	count++;
	}
	return (count);
}
