#include <stdio.h>
#include "main.h"

/**
 *is_prime_number_help - Entry point
 *@mult: erer
 *@n : caractere a verifier
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */


int is_prime_number_help(int n, int mult)
{

if (mult * mult > n)
return (1);
if (n % mult == 0)
return (0);

return (is_prime_number_help(n, mult + 2));
}


/**
 *is_prime_number - Entry point
 *@n : caractere a verifier
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);

if (n == 2)
return (1);

if ((n % 2) == 0 && n > 2)
return (0);

return (is_prime_number_help(n, 3));
}
