#include <stdio.h>
#include "main.h"

/**
 *rev_string - Entry point
 *@s : caractere a verifier
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
int i = 0, len;
len = _strlen(s) - 1;
while (len > i)
	{
	swap_char(s + len, s + i);
	i++;
	len--;
	}
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

/**
 *swap_char - Entry point
 *@a : caractere a verifier
 *@b : swapper
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */


void swap_char(char *a, char *b)
{
char swap = *a;

*a = *b;
*b = swap;

}


