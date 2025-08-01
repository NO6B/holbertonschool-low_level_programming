#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - Prints all elements of a list_t linked list
 * @h: Pointer to the head of the list
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	{
	printf("[0] (nil)\n");
	}
	else
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	elements++;
	}

	return (elements);
}
