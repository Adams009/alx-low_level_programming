#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
  * get_op_func - select correct function
  * @s: operator
  *
  * Return: 0
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int itr = 0;

	for (; itr < 5; itr++)
	{
		if (strcmp(s, ops[itr].op) == 0)
			return (ops[itr].f);
	}

	return (0);
}
