#include <stdlib.h>
#include "3-calc.h"
/**
  * get_op_func - Chooses the right function for the user's requested operation.
  * @s: The pointer to string
  * Return: result of the selected operation
  */
int (*get_op_func(char *s))(int, int)
{
	int x;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	x = 0;
	while (x < 5)
	{
		if (*ops[x].op == *s && !(*(s + 1)))
			return (ops[x].f);
		x++;
	}
	return (NULL);
}
