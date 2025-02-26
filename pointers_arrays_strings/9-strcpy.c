#include <stdio.h>
#include "main.h"

/**
 *_strcpy - Entry point
 *@src : caractere a verifier
 *@dest : azrr
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
int i;
int len;

len = 0;
while (src[len] != '\0')
len++;

for (i = 0 ; i < len ; i++)
{
dest[i] = src[i];
}
dest[len] = '\0';
return (src);
}


