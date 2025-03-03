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

char *_strchr(char *s, char c)
{
int i;

while(s[i] != c)
{
i++;
}

return(s + i);
}
