#include <stdio.h>
#include <string.h>
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
/*int len;
int i;
char *temp[strlen(s)];

len = 0;
while (s[len] != '\0')
len++;

for (i = 1; i < len + 1  ; i++)
{
temp[i] = s[len - (i)];

}
*/
s=strrev(s);
}
