#include "monty.h"

/**
 * op_add - vdsbvdsvhds
 * @stack: jsadhdss
 * @line_number: hdashdhsad
 *
 * Return: hgasgsahgsa
 */
void op_add(stack_t **stack, unsigned int line_number)
{
	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n",
			line_number);
		fmonkey((*stack));
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = (*stack)->next->n + (*stack)->n;
	op_pop(stack, line_number);
}

/**
 * op_sub - vdsbvdsvhds
 * @stack: jsadhdss
 * @line_number: hdashdhsad
 *
 * Return: hgasgsahgsa
 */
void op_sub(stack_t **stack, unsigned int line_number)
{
	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n",
			line_number);
		fmonkey((*stack));
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = (*stack)->next->n - (*stack)->n;
	op_pop(stack, line_number);
}

/**
 * op_mul - vdsbvdsvhds
 * @stack: jsadhdss
 * @line_number: hdashdhsad
 *
 * Return: hgasgsahgsa
 */
void op_mul(stack_t **stack, unsigned int line_number)
{
	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n",
			line_number);
		fmonkey((*stack));
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = (*stack)->next->n * (*stack)->n;
	op_pop(stack, line_number);
}

/**
 * op_div - vdsbvdsvhds
 * @stack: jsadhdss
 * @line_number: hdashdhsad
 *
 * Return: hgasgsahgsa
 */
void op_div(stack_t **stack, unsigned int line_number)
{
	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n",
			line_number);
		fmonkey((*stack));
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n",
			line_number);
		fmonkey((*stack));
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = (*stack)->next->n / (*stack)->n;
	op_pop(stack, line_number);
}

/**
 * op_mod - vdsbvdsvhds
 * @stack: jsadhdss
 * @line_number: hdashdhsad
 *
 * Return: hgasgsahgsa
 */
void op_mod(stack_t **stack, unsigned int line_number)
{
	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n",
			line_number);
		fmonkey((*stack));
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n",
			line_number);
		fmonkey((*stack));
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = (*stack)->next->n % (*stack)->n;
	op_pop(stack, line_number);
}
