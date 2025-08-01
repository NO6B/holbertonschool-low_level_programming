#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes printed.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	count++;
	}
	return (count);
}
