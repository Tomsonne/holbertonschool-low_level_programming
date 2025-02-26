#include <stdio.h>
#include "main.h"

/**
 *print_array - Entry point
 *@a : caractere a verifier
 *@n : aerzerze
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
int i;

for (i = 0 ; i < n ; i++)
{
if (i == 0)
printf("%d", a[i]);
else
printf(", %d", a[i]);
}
printf("\n");
}
