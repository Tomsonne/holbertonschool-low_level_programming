#include <stdio.h>
#include "main.h"

/**
 *_strlen_recursion - Entry point
 *@s : caractere a verifier
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)
{

if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));

}
