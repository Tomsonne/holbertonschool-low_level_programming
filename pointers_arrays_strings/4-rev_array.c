#include <stdio.h>
#include "main.h"

/**
 *reverse_array - Entry point
 *@a : caractere a verifier
 *@n :yugr
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
int i;
n--;

for (i = 0 ; i < n ; i++)
{
swap_int(a + n, a + i);
n--;
}

}



/**
 *swap_int - Entry point
 *@a : caractere a verifier
 *@b : swapper
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
int swap = *a;

*a = *b;
*b = swap;

}
