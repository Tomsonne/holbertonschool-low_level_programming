#include"main.h"
#include<stdio.h>
/**
 *print_alphabet_x10 - Entry point
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
int i;
char c;

for (i = 0 ; i < 10 ; i++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar (c);
		}
	_putchar('\n');
	}
}
