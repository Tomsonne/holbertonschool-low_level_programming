#include <stdio.h>
#include "main.h"

/**
 *factorial - Entry point
 *@n : caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

int factorial(int n)
{

if (n < 0)
return (-1);

if (n == 0)
return (1);

return (n * factorial(n - 1));

}
