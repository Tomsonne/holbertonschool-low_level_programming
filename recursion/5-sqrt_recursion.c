#include <stdio.h>
#include "main.h"

/**
 *_sqrt_recursion - Entry point
 *@s : caractere a verifier
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */


int _sqrt_recursion_help(int n, int mult)
{

if (mult * mult == n)
return mult;
if (mult * mult > n)
return -1;

return (_sqrt_recursion_help(n, mult + 1));
}

int _sqrt_recursion(int n)
{
if (n < 0)
return -1;

return (_sqrt_recursion_help(n, 0));
}
