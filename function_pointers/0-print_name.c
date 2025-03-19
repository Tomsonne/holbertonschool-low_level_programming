#include "function_pointers.h"

/**
 * print_name - a
 * @name: string
 * @f: pointeur de fonction
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
