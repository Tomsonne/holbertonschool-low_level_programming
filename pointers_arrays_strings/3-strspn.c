#include <stdio.h>
#include "main.h"

/**
 *_strspn - Entry point
 *@s: caractere a verifier
 *@accept:azeze
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */


unsigned int _strspn(char *s, char *accept)
{
unsigned int  res = 0;
int lenS = _strlen(s);
int lenA = _strlen(accept);
int b1, b2;
int found;

for (b1 = 0 ; b1 < lenS ; b1++)
{
found = 0;
for (b2 = 0 ; b2 < lenA ; b2++)
{
if (s[b1] == accept[b2])
{
found = 1;
break;
}
}
if (!found)
break;
res++;
}
return (res);
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
