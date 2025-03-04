#include <stdio.h>
#include "main.h"

/**
 *_strchr - Entry point
 *@c: caractere a verifier
 *@s:azeze
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
int i;
int len = _strlen(s);

if (s[len] == c)
return (s + len);
for (i = 0; i  < len ; i++)
{
if (s[i] == c)
return (s + i);
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
