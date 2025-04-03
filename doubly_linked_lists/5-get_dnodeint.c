#include "lists.h"

/**
 * get_dnodeint_at_index - add
 * @head: double pointer
 * @index: int value
 * Return: Address
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;

i = 0;
while (index)
{
if (head->next == NULL)
return (NULL);
head = head->next;
}
return (head);
}
