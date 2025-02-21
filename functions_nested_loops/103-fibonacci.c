#include <stdio.h>
/**
 *main - Entry point
 *: caractere a verifier
 *int c: caractere a verifier
 *fonction: ecris alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
unsigned long int num1, num2,  sum, pair;

pair = 0;
sum = 0;
num1 = 1;
num2 = 2;

while (sum < 4000000)
{
	sum = num1 + num2;
	num1 = num2;
	num2 = sum;
	if ((sum % 2) == 0)
	pair = pair + sum;
}
printf("%lu", pair + 2);

putchar('\n');
return (0);
}
