#include <ctype.h>
#include"main.h"
/**
 * _islower - Entry point
 *@c: caractere a verifier
 *int c: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
int res = islower(c);

if (res != 0)
return (0);
return (1);
}
