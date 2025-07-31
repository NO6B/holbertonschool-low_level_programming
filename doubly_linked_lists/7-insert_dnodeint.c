#include "lists.h"
#include <stdlib.h>
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node;
    unsigned int i = 0;

    if (h == NULL)
        return (NULL);

    if (idx == 0)
        return (add_dnodeint(h, n));

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);
    new_node->n = n;

    while (*h != NULL && i < idx)
    {
        *h = (*h)->next;
        i++;
    }

    if ((*h) == NULL || (*h)->next == NULL)
        return (add_dnodeint_end(h, n));

    new_node->next = (*h)->next;
    new_node->prev = *h;
    (*h)->next->prev = new_node;
    (*h)->next = new_node;

    return (new_node);
}