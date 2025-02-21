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
int res, i, mult, t;

t = 0;

for (i = 0 ; i < 10 ; i++)
{
t = 0;
for (mult = 0 ; mult < 10 ; mult++)
{
res = i * mult;
if (mult != 9)
{
if (t == 0)
{
_putchar(res + '0');
t++;
}
else if (res <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(res + '0');
}
else if (res >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
}
}
_putchar('\n');
}
}
