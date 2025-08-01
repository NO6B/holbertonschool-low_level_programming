#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - returns the sum of all  data of list.
 * @head: pointer to the head of the list
 * Return: 0 if head = NULL  else return i
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	if (head == NULL)
	{
	return (0);
	}

	while (head != NULL)
	{
	i += head->n;
	head = head->next;
	}
	return (i);
}
