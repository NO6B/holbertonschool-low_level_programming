#include "lists.h"
char *my_strdup(const char *str);
int _strlen(const char *s);
/**
 * add_node_end - Add a new node at the end of a list_t list
 * @head: Double pointer to head of the list
 * @str: String to duplicate and store in the new node
 * Return: Address of new node, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_nodes, *tmp;

	new_nodes = malloc(sizeof(list_t));
	if (new_nodes == NULL)
	{
	return (NULL);
	}

	new_nodes->str = my_strdup(str);
	if (new_nodes->str == NULL)
	{
	free(new_nodes);
	return (NULL);
	}
	new_nodes->len = _strlen(str);
	new_nodes->next = NULL;

	if (*head == NULL)
	{
	*head = new_nodes;
	}
	else
	{
	tmp = *head;
	while (tmp->next != NULL)
	tmp = tmp->next;

	tmp->next = new_nodes;

	}
	return (new_nodes);
}
/**
 * my_strdup - Duplicate a string
 * @str: String to duplicate
 * Return: Pointer to new string, or NULL if fail
 */
char *my_strdup(const char *str)
{
	int len;
	int i;
	char *copy;

	if (str == NULL)
	{
	return (NULL);
	}
	len = _strlen(str);

	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < len; i++)
	copy[i] = str[i];
	copy[i] = '\0';
	return (copy);
}
/**
 * _strlen - Get length of a string
 * @s: String to measure
 * Return: Length of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}
	return (i);
}

