#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the correct func to perform the operation
 * @s: The operator passed as argument.
 * Return: pointer to the func corresponding to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
