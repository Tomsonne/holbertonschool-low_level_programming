#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums
 * @n: number of arguments
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
va_list list;
unsigned int i;
int sum;


if (n == 0)
return (0);

va_start(list, n);
for (i = 0, sum = 0; i < n; i++)
	sum += va_arg(list, int);

va_end(list);
return (sum);
}
