#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - a
 * @size: string
 * @action: pointeur de fonction
 *@array: array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t index = 0;

for (index = 0; index < size; index++)
action(array[index]);

}

