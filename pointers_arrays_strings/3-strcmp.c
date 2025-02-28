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


int _strcmp(char *s1, char *s2)
{
int i;
int lenS = _strlen(s2);
int res = 0;

for (i = 0 ; i < lenS ; i++)
{
if (s1[i] != s2[i])
{
res = (s1[i] - '0') - (s2[i] - '0');
return (res);
}
}

return (0);

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
