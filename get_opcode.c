#include "monty.h"

/**
 * get_opcode - ahdashjdsahgjdas
 * @name: hbjdsjhadsjds
 * @stack: kasdjkabdkak
 * @line_number: ghvsdasdvd
 *
 * Return: hjbdahbjdasbhjdas
 */

void get_opcode(stack_t **stack, unsigned int line_number, char *name)
{
	instruction_t ops[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pop", op_pop},
		{"pint", op_pint},
		{"swap", op_swap},
		{"add", op_add},
		{"nop", op_nop},
		{"sub", op_sub},
		{"div", op_div},
		{"mul", op_mul},
		{"mod", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	if (!ops[i].opcode)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n",
			line_number, name);
		fmonkey((*stack));
		exit(EXIT_FAILURE);
	}
	while (ops[i].opcode)
	{
		if (strcmp(ops[i].opcode, name) == 0)
		{
			ops[i].f(stack, line_number);
		}
		i++;
	}
}
