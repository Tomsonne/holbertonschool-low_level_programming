#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *create_array - Entry point
 *@size : caractere a verifier
 *@c : azazr
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{

unsigned int i;
char *array;

if (size == 0)
return (NULL);

array = malloc(size * sizeof(char));

if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = c;

return (array);

}
