#include "lists.h"

/**
 * free_dlistint - libère
 * @head: pointeur
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

if (head != NULL)
{
while (head->prev != NULL)
head = head->prev;
}

while (head != NULL)
{
temp = head;
head = head->next;

free(temp->n);
free(temp);
}
}
