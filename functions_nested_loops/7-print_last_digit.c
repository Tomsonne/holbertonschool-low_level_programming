#include <ctype.h>
#include"main.h"
#include <stdlib.h>
/**
 * print_last_digit - Entry point
 *@c: caractere a verifier
 *int c: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */


int print_last_digit(int c)
{
int res = abs(c);

res = res % 10;
return (res % 10);
}
