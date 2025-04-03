#include "lists.h"

/**
 * add_dnodeint - add
 * @head: double pointer
 * @n: int value
 * Return: Address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *hold;
dlistint_t *new;

hold = *head;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
	return (NULL);
new->n = n;
*head = new;

if (hold == NULL)
	new->next = NULL;
else
	new->next = hold;

return (new);
}
