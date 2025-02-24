#include <ctype.h>
#include"main.h"
/**
 * _isupper - Entry point
 *@c: caractere a verifier
 *int c: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
int res = isupper(c);

if (res != 0)
return (1);
return (0);
}
