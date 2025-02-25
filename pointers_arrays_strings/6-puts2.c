#include <stdio.h>
#include "main.h"

/**
 *puts2 - Entry point
 *@str : caractere a verifier
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
int len;
int i = 0;

len = 0;
while (str[len] != '\0')
len++;
for (i = 0 ; i < len ; i++)
{
if (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}
