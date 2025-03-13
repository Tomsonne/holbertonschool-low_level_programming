#include <stdlib.h>
#include "main.h"

/**
 *array_range - Entry point
 *@min : caractere a verifier
 *@max :j
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */


int *array_range(int min, int max)
{
int *res;
int index;

if (min > max)
	return (NULL);
res = malloc(sizeof(int) * (max - min + 1));
if (res == NULL)
	return (NULL);
index = 0;
while (min <= max)
{
	res[index] = min;
	min++;
	index++;
}
return (res);
}
