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
unsigned long int add3, add5, sum;
int i;

add3 = 0;
add5 = 0;
sum = 0;

for (i = 0; i < 1024; i++)
{
	if ((i % 3) == 0)
	{
		add3 = add3 + i;
	}
	else if ((i % 5) == 0)
	{
		add5 = add5 + i;
	}
}
sum = add3 + add5;
printf("%lu\n", sum);
return (0);
}
