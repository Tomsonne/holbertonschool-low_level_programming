#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - Entry point
 *@size : caractere a verifier
 *@nmemb : caractere a verifier
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

char *res;
unsigned int count;

if (nmemb == 0 || size == 0)
	return (NULL);
res = malloc(nmemb * size);
if (res == NULL)
	return (NULL);
count = 0;
while (count < nmemb * size)
{
	res[count] = 0;
	count++;
}
return (res);

}
