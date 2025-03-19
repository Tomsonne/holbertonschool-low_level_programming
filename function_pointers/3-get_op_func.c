#include "3-calc.h"
#include <stddef.h>


/**
 * get_op_func - add
 * @s: val 1
 * Return: res
 */


int (*get_op_func(char *s))(int, int)
{
int index = 0;

op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

while (ops[index].op != NULL)
{
	if (strcmp(ops[index].op, s) == 0)
	return (ops[index].f);
	index++;
}
return (NULL);
}
