#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts
 *
 * @h: head
 * @idx: index
 * @n: value
 * Return: the
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new;
dlistint_t *head;
unsigned int i;

new = NULL;
if (idx == 0)
new = add_dnodeint(h, n);
else
{
head = *h;
i = 1;

while (head != NULL && i < idx)
{
head = head->next;
i++;
}

if (head == NULL)

new = malloc(sizeof(dlistint_t));
if (new != NULL)
{
new->n = n;
new->next = head->next;
new->prev = head;

if (head->next != NULL)
head->next->prev = new;
head->next = new;
}
}

return (new);
}

