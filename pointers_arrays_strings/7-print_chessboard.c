#include <stdio.h>
#include "main.h"

/**
 *print_chessboard - Entry point
 *@a:azeze
 *int *n: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */


void print_chessboard(char (*a)[8])
{
int i, j;

i = j = 0;
while (i < 8)
{
j = 0;
while (j < 8)
{
_putchar(a[i][j]);
j++;
}
_putchar('\n');
i++;
}
}



