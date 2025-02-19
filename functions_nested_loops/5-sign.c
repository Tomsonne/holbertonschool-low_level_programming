#include <ctype.h>
#include"main.h"
/**
 *print_sign - Entry point
 *@n: 1 si n>0 0 si n=0 et -1 si n<0
 *int c: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */


int print_sign(int n)
{
	if (n > 0)
	return (1);
	else if (n == 0)
	return (0);
	else
	return (-1);
}
