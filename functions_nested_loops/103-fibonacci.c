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
unsigned long int num1, num2, i, sum;

sum = 0;
num1 = 1;
num2 = 2;
i = 0;

printf("%lu, ", num1);
printf("%lu, ", num2);
	while (sum < 4000000)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		if (i == 3524578)
			printf("%lu", sum);
		if ((sum % 2) == 0)
			printf("%lu, ", sum);
	}
putchar('\n');
return (0);
}
