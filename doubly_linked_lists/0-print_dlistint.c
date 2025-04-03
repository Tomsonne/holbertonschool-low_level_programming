#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - p
 * @h: h
 * Return: n
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;

while (h)
{
count++;
printf("%d\n", h->n);
h = h->next;
}

return (count);
}
