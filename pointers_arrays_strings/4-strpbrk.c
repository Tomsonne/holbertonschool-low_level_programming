#include <stdio.h>
#include "main.h"

/**
 *_strpbrk - Entry point
 *@accept: caractere a verifier
 *@s:azeze
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
int lenS = _strlen(s);
int lenA = _strlen(accept);
int b1, b2;

for (b1 = 0 ; b1 < lenS ; b1++)
	{
	for (b2 = 0 ; b2 < lenA ; b2++)
		{
		if (s[b1] == accept[b2])
			{
			return (s + b1);
			}
		}
	}
return (NULL);
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
