#include <ctype.h>
#include"main.h"
/**
 * _isdigit - Entry point
 *@c: caractere a verifier
 *int c: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
int res = isdigit(c);

if (res != 0)
return (1);
return (isdigit(c));
}
