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
_putchar(abs(c % 10) + '0');
return (abs(c % 10));
}
