#include <stdio.h>
#include "main.h"

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
