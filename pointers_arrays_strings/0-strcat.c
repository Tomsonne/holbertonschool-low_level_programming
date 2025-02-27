#include <stdio.h>
#include "main.h"

/**
 *_strcat - Entry point
 *@dest : caractere a verifier
 *@src :azeze
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */


char *_strcat(char *dest, char *src)
{
int i;
int lenD = _strlen(dest);
int lenS = _strlen(src);


for (i = 0 ; i < lenS ; i++)
{
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
