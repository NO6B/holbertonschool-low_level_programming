#include "lists.h"
#include <stdlib.h>
size_t dlistint_len(const dlistint_t *h)
{
    int count = 0;

    while (h != NULL)
    {
      h = h->next;
      count++;
    }
    return (count);
}