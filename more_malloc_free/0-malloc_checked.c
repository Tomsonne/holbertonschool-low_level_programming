#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - Entry point
 *@b : caractere a verifier
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */


void *malloc_checked(unsigned int b)
{

void *test;

test = malloc(b);
if (test == NULL)
exit(98);
return (test);
}
