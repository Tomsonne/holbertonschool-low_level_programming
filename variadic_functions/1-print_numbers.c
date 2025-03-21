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

if (n > 0)
{
va_start(list, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(list, int));
if (i < n - 1 && separator)
printf("%s", separator);
}
va_end(list);
}
printf("\n");
}
