#include "3-calc.h"


/**
 * main - Main calcul
 * @argc: nombre parametre
 * @argv: num1 operant et num 2
 * Return: res
 */

int main(int argc, char *argv[])
{
int res, val1, val2;
int (*func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

val1 = atoi(argv[1]);
val2 = atoi(argv[3]);

func = get_op_func(argv[2]);
if (func == NULL)
{
printf("Error\n");
exit(99);
}

res = func(val1, val2);

printf("%d\n", res);

return (0);
}
