#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
/**
 * op_add - add
 * @a: val 1
 * @b: val 2
 * Return: res
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - sub
 * @a: val 1
 * @b: val 2
 * Return: res
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - mul
 * @a: val 1
 * @b: val 2
 * Return: res
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - div
 * @a: val 1
 * @b: val 2
 * Return: res
 */

int op_div(int a, int b)
{
if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
return (a / b);
}

/**
 * op_mod - mod
 * @a: val 1
 * @b: val 2
 * Return: res
 */

int op_mod(int a, int b)
{
if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
return (a % b);
}
