#include <stdio.h>
#include "main.h"

/**
 *_memcpy - Entry point
 *@dest: caractere a verifier
 *@src:azeze
 *@n: number
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int  i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
