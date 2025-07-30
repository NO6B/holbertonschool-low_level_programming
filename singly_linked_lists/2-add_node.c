#include <stdlib.h>
#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @str: String to duplicate and store in the new node
 * Return: Address of the new node, or NULL on failure
 */
char *my_strdup(const char *str);
int _strlen(const char *s);
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
	return (NULL);
	}

	new_node->str = my_strdup(str);
	if (new_node->str == NULL)
	{
	free(new_node);
	return (NULL);
	}
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
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

