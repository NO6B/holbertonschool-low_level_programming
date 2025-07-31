#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - Add a new node at the end
 * @head: Double pointer to head of the list
 * @n:integer
 * Return: Address of new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
	return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
	new_node->prev = NULL;
	(*head) = new_node;

	}
	else
	{
	tmp = *head;
	while (tmp->next != NULL)
	tmp = tmp->next;

	tmp->next = new_node;
	new_node->prev = tmp;
	}
	return (new_node);
}
