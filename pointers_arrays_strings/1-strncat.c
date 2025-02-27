#include <stdio.h>
#include "main.h"

/**
 *_strncat - Entry point
 *@dest : caractere a verifier
 *@src :azeze
 *@n :utc
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
int i;
int lenD = _strlen(dest);
int lenS = _strlen(src);


for (i = 0 ; i < lenS ; i++)
{
if (i < n)
dest[lenD + i] = src[i];
}

return (dest);

}


/**
 *_strlen - Entry point
 *@s : caractere a verifier
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
int len;

len = 0;
while (s[len] != '\0')
len++;

return (len);
}
