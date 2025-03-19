#include "calc.h"





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
  int i;
while(ops[index].op != NULL)
	
	return(ops[index].f);

}
