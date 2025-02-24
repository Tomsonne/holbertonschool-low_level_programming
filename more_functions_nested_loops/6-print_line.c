#include <stdio.h>
#include"main.h"
/**
 *print_line - Entry point
 *@n : caractere a verifier
 * fonction: ecris nombre
 * Return: void
 */

void print_line(int n)
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
