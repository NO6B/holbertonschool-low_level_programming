#include "lists.h"
#include <stdlib.h>
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
   dlistint_t *new_nod;
    new_nod = malloc(sizeof(int));
    if (new_nod == NULL)
    {
        return (NULL);
    }
    
   new_nod -> n;
   new_nod ->prev= NULL;
   new_nod ->next = *head;

   if (*head != NULL)
   {
    return (new_nod);
   }
   
}