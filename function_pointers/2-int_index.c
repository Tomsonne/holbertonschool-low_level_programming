#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - aaz
 * @size: string
 * @cmp: pointeur de fonction
 * @array: array
 * Return: inde
 */


int int_index(int *array, int size, int (*cmp)(int))
{
int index = 0;

if (size < 1 || array == NULL || cmp == NULL)
return (-1);
for (index = 0; index < size; index++)
	{
	if (cmp(array[index]))
	return (index);
	}
return (-1);
}
