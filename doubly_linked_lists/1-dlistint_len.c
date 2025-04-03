#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - p
 * @h: h
 * Return: n
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *c;
size_t count;

for (c = h, count = 0; c != NULL; count++, c = c->next)
;

return (count);
}


