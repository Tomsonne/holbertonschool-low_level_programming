#include <stdio.h>
#include "main.h"

/**
 *print_diagsums - Entry point
 *@a: caractere a verifier
 *@size:azeze
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
int i, sumx, sumy;

sumx = sumy = 0;
for (i = 0; i < (size * size); i += size + 1)
sumx += a[i];
for (i = size - 1; i < (size * size - 1); i += size - 1)
sumy += a[i];
printf("%d, %d\n", sumx, sumy);
}
