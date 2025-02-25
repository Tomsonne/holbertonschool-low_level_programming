#include <stdio.h>
#include "main.h"

/**
 *_puts - Entry point
 *@str : caractere a verifier
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
int len ;
int i = 0;

len = _strlen(str);
for (i = 0 ; i < len ; i++)
_putchar(str[i]);

_putchar('\n');
}
