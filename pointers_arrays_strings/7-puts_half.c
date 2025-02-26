#include <stdio.h>
#include "main.h"

/**
 *puts_half - Entry point
 *@str : caractere a verifier
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
int len;
int start;

len = 0;
while (str[len] != '\0')
len++;

if (len % 2 == 1)
start = len / 2 + 1;
else
start = len / 2;
for (start = start ; start < len ; start++)
_putchar(str[start]);
_putchar('\n');
}
