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
double num1, num2, i, sum;

sum = 0;
num1 = 1;
num2 = 2;
i = 0;

printf("%.0f, ", num1);
printf("%.0f, ", num2);
for (i = 0; i <= 95; i++)
{
sum = num1 + num2;
num1 = num2;
num2 = sum;
if (i == 95)
printf("%.0f", sum);
else
printf("%.0f, ", sum);
}
putchar('\n');
return (0);
}
