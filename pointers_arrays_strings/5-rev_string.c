#include <stdio.h>
#include "main.h"

/**
 *rev_string - Entry point
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

void rev_string(char *s)
{
/*
int len;
int i;

len = _strlen(s);
char temp[len];
for (i = 0 ; i < len + 1  ; i++)
{
temp[i] = s[len - (i)];
}
for (i = 0 ; i < len + 1  ; i++)
{
s[i] = temp[len - (i)];
}*/

char temp;
    int n = _strlen(s)-1,i;

 for(i = 0 ; i < n / 2 ; i++)
{
    temp = s[i];
    s[i] = s[n-i];
    s[n-i] = temp;
 }
}
