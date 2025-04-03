#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - p
 * @h: h
 * Return: n
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *c;
size_t count;

for (c = h, count = 0; c != NULL; count++, c = c->next)
	printf("%d\n", c->next);

return (count);
}
