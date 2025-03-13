#include "main.h"
#include <stdlib.h>

/**
 *_strdup - Entry point
 *@str : caractere a verifier
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
unsigned int lenght;
char *res;
unsigned int i;

if (str == NULL)
return (NULL);

lenght = 0;

while (str[lenght] != '0')
lenght++;

res = malloc((lenght + 1) * sizeof(char));

if (res == NULL)
return (NULL);

for (i = 0; i < lenght; i++)
res[i] = str[i];

res[lenght] = '\0';

return (res);
}
