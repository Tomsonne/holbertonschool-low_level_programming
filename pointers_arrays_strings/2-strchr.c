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
int len = _strlen(s);

for (i = 0; i  < len ; i++)
{
if(s[i] == c)
return(s + i);
}



return(NULL);
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
