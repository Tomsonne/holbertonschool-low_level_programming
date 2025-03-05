#include <stdio.h>
#include "main.h"

/**
 *is_prime_number - Entry point
 *@s : caractere a verifier
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */


int is_prime_number(int n)
{
int sqrt;
int i = 3;

sqrt = _sqrt_recursion(n);
if (n <= 1)
return (0);
if ((n % 2) == 0)
return (1);

for (i = 3; i < sqrt; i++)
{
if ((sqrt % i) == 0)
return (0);
}
return (1);

}




/**
 *_sqrt_recursion_help - Entry point
 *@mult: erer
 *@n : caractere a verifier
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */


int _sqrt_recursion_help(int n, int mult)
{

if (mult * mult == n)
return (mult);
if (mult * mult > n)
return (-1);

return (_sqrt_recursion_help(n, mult + 1));
}


/**
 *_sqrt_recursion - Entry point
 *@n : caractere a verifier
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (_sqrt_recursion_help(n, 0));
}
