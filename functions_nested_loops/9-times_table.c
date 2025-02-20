#include <stdio.h>
#include"main.h"
/**
 *times_table - Entry point
 *: caractere a verifier
 *int c: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

void times_table(void)
{
int res, i, mult;
for (i = 0 ; i < 10 ; i++)
{

	for (mult = 0 ; mult < 10 ; mult++)
	{
	res = i * mult;
²²²²if (res < 10)
{0000000000
_putchar((res % 10) + '0');
	if (mult != 9)
	{
	_putchar((res / 10) + '0');
	_putchar((res % 10) + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	}
	else
		{
		_putchar((res / 10) + '0');
	        _putchar((res % 10) + '0');
		_putchar('\n');
		}
}
	}
}
}
