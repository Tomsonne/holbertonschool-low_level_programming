#include <stdio.h>
#include"main.h"
/**
 *more_numbers - Entry point
 * : caractere a verifier
 * fonction: ecris nombre
 * Return: void
 */

void more_numbers(void)
{
int i, c;

for (i = 0; i < 10 ; i++)
{
for (c = 0 ; c < 15 ; c++)
{
if (c > 9)
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}

_putchar('\n');
}
}
