#include "lists.h"

/**
 * add_dnodeint_end - add
 * @head: double pointer
 * @n: int value
 * Return: Address
 */


/**
 *_strlen - Entry point
 *@s : caractere a verifier
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

 int _strlen(const char *s)
 {
     int len;
 
     len = 0;
     while (s[len] != '\0')
     len++;
 
     return (len);
 }
 
 /**
  * add_node_end - ajoute
  * @head: pointeur
  * @str: chaîne
  *
  * Return: a
  */
 
  dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node;
    dlistint_t *temp;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
    {
        return (NULL);
    }
 
    new_node->n = n;
   
    
    new_node->next = NULL;
 
    if (*head == NULL)
    {
        *head = new_node;
        new_node->prev = NULL;
        new_node->next = NULL;
        return (new_node);
    }
    else
    {

    
 
    temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
 
    temp->next = new_node;
    new_node->prev = temp;
    new_node->next = NULL;
    }
    return (new_node);
}
 

