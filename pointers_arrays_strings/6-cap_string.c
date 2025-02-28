#include <stdio.h>
#include"main.h"
/**
 *cap_string - Entry point
 *@str : caractere a verifier
 * fonction: ecris nombre
 * Return: void
 */


char *cap_string(char *str)
{
char spe[14] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}',
' ', '\t', '\n'};
int i, j;


i = 0;
while (str[i] != '\0')
	{
if (str[0] >= 'a' && str[0] <= 'z')
str[0] -= 32;
	for (j = 0 ; j < 14 ; j++)
		{
		if (str[i] == spe[j])
			{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			str[i + 1] -= 32;
			}
		}
	i++;
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
