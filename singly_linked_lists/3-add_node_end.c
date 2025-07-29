#include "lists.h"
char *my_strdup(const char *str);
int _strlen(const char *s);
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

int _strlen(const char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}