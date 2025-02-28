#include <stdio.h>
#include "main.h"

/**
 *string_toupper - Entry point
 *@str : caractere a verifier
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

char *string_toupper(char *str)
{
int i;
int len = _strlen(str);
for (i = 0; i < len; i++)
{
if (str[i] > 'a')
str[i] = str[i] - 32;
}
return (str);
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
