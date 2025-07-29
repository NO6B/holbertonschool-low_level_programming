#include <stdlib.h>
#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Pointer to the head pointer
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
    
    new_node ->str = my_strdup(str);
    if (new_node -> str == NULL)
    {
        free(new_node);
        return (NULL);
    }
    new_node->len =_strlen(str);
    new_node->next = *head;
    *head = new_node;
    return (new_node);
}

int _strlen(const char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}


char *my_strdup(const char *str)
{
    int len;
    int i;
    char *copy;
    if (str == NULL)
    {
        return (NULL);
    }
    

    len =_strlen(str);

    copy= malloc(sizeof(char)* (len + 1));
    if (copy == NULL)
    {
        return NULL;
    }
    
    for (i = 0; i < len; i++)
        copy[i] = str [i];
    copy [i] = '\0';
    return (copy);
}