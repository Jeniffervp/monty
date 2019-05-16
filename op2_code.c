#include "monty.h"

/**
 * op_swap - vdsbvdsvhds
 * @stack: jsadhdss
 * @line_number: hdashdhsad
 *
 * Return: hgasgsahgsa
 */
void op_swap(stack_t **stack, unsigned int line_number)
{
	int temp = 0;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n",
			line_number);
		fmonkey((*stack));
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}

/**
 * op_nop - vdsbvdsvhds
 * @stack: jsadhdss
 * @line_number: hdashdhsad
 *
 * Return: hgasgsahgsa
 */
void op_nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
