#include <stdio.h>
#include "main.h"

/**
 *_strstr - Entry point
 *@haystack: caractere a verifier
 *@needle:azeze
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
int lenH;
int i;

lenH = _strlen(haystack);
if (*needle == '\0')
return (haystack);
for (i = 0 ; i <= lenH ; i++)
{
char *h = haystack + i;
char *n = needle;
while (*h == *n && *n != '\0')
{
h++;
n++;
}
if (*n == '\0')
return (haystack + i);
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
