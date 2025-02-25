#include <stdio.h>
#include "main.h"

/**
 *print_rev - Entry point
 *@s : caractere a verifier
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
int len;
int i = 0;


len = 0;
while (s[len] != '\0')
len++;

for (i = 0; i < len ; i++)
_putchar(s[len-i]);

_putchar(s[len]);
_putchar('\n');

}
