#include "lists.h"

/**
 * list_len - affiche tout les elements de la liste
 * @h: pointeur vers le prochain noeud
 * Return: Nombre de noeud dans la liste
 */

size_t list_len(const list_t *h)
{
size_t count = 0;

while (h)
{
count++;
h = h->next;
}

return (count);
}
