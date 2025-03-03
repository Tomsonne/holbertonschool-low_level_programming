#include <stdio.h>
#include "main.h"

/**
 *_memset - Entry point
 *@b: caractere a verifier
 *@s:azeze
 *@n: number
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
char *m = s;
unsigned int  i = 0;

while (i < n)
{
m[i] = b;
i++;
}
return (s);
}
