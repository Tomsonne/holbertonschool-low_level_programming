#include <stdio.h>
#include"main.h"
/**
 *main - Entry point
 * : caractere a verifier
 * fonction: ecris nombre
 * Return: void
 */


int main(void)
{
int val, cent;

cent = 100;
for (val = 1; val <= cent ; val++)
{

if ((val % 3) == 0 && (val % 5) == 0)
printf("FizzBuzz");
else if (val % 3 == 0)
printf("Fizz");
else if ((val % 5) == 0)
printf("Buzz");
else
printf("%d ", val);
if (val !=100)
putchar(' ');

}
putchar('\n');

return (0);
}
