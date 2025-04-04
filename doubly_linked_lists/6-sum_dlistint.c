#include "lists.h"
/**
  * sum_dlistint - sums
  * @head: pointer
  * Return: sum
  */
int sum_dlistint(dlistint_t *head)
{
int sum;

for (sum = 0; head; sum += head->n, head = head->next)
;
return (sum);
}
