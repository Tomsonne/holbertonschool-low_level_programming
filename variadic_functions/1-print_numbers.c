#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_numbers - sums
 * @separator: number of arguments
 * @n: number
 * Return: sum of arguments
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;

if (n == 0)
return;

va_start(list, n);
printf("%d", va_arg(list, int));

for (i = 1; i < n; i++)
	printf("%s%d", separator, va_arg(list, int));

return;

}
