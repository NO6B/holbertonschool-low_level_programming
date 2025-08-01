#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: Double pointer to the head of the list
 * @n: Integer to store in the new node
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nod;

	new_nod = malloc(sizeof(dlistint_t));
	if (new_nod == NULL)
	{
	return (NULL);
	}

	new_nod->n = n;
	new_nod->prev = NULL;
	new_nod->next = NULL;

	if (*head != NULL)
	{
	(*head)->prev = new_nod;
	new_nod->next = *head;
	}

	*head = new_nod;
	return (new_nod);

}

