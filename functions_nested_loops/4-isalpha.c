#include <ctype.h>
#include"main.h"
/**
 * _isalpha - Entry point
 *@c: caractere a verifier
 *int c: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
int res = isalpha(c);

if (res != 0)
return (1);
return (isalpha(c));
}
