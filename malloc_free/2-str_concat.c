#include "main.h"
#include <stdlib.h>

/**
 *str_concat - Entry point
 *@s1 : caractere a verifier
 *@s2 : azr
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

char *str_concat(char *s1, char *s2)
{

char *res;
int index, ttindex = 0, lenght = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (index = 0; s1[index] || s2[index]; index++)
lenght++;

res = malloc(sizeof(char) * lenght);

if (res == NULL)
return (NULL);

for (index = 0; s1[index]; index++)
res[ttindex++] = s1[index];

for (index = 0; s2[index]; index++)
res[ttindex++] = s2[index];

return (res);

}
