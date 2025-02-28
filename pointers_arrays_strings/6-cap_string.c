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
char spe[16]= {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', ' ', '\t', '/', '\\'};
int len = _strlen(str) ;
int i, j;
int maj;

for (i = 0 ; i < len ; i++)
	{
	for (j = 0 ; j < 13 ; j++)
		{
		if ( str[i] == spe[j] )
			{
			maj = i+1;
			while (str[maj] >= 'z' && str[maj] <= 'a')
			maj++;
			str[maj] = str[maj] - 32;
			}

		}


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
