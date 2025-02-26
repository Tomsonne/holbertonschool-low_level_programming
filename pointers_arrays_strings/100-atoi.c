#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *_strlen - Entry point
 *@s : caractere a verifier
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */


int _atoi(char *s)
{
int i;
int res;
int val;

i = 0;
val = 0;
if ((s[i] == 45 || s[i]) >= (48 && s[i] <= 57))
	{
	while ((s[i] == 45 || s[i]) >= (48 && s[i] <= 57))
		{
		if (s[i] == 45)
			res = res * -1;
		else if (s[i] >= 48 && s[i] <= 57)
			{
				res[val] = s[i];
				val++;
			}
		i = i + 1;
		}
	}
else
	_putchar('0');

return (res);

}
