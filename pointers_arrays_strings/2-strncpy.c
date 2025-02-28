#include <stdio.h>
#include "main.h"

/**
 *_strncpy - Entry point
 *@dest : caractere a verifier
 *@src :azeze
 *@n :azer
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */


char *_strncpy(char *dest, char *src, int n)
{
int i;
/*int lenD = _strlen(dest);*/
int lenS = _strlen(src);


for (i = 0 ; i < lenS ; i++)
{
if (i < n)
dest[i] = src[i];
}

while (i < n)
dest[i++] = '\0';

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
