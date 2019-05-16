#include "monty.h"

/**
 * op_push - vdsbvdsvhds
 * @stack: jsadhdss
 * @line_number: hdashdhsad
 *
 * Return: hgasgsahgsa
 */

void op_push(stack_t **stack, unsigned int line_number)
{
	stack_t  *new_node, *temp;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "USAGE: monty file\n");
		fmonkey(new_node);
		exit(EXIT_FAILURE);
	}
	if (!batm.data && batm.data != 0)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		fmonkey(new_node);
		exit(EXIT_FAILURE);
	}
	new_node->n = batm.data;
	new_node->next = *stack;
	new_node->prev = NULL;
	temp = *stack;
	if (*stack != NULL)
		temp->prev = new_node;
	*stack = new_node;
}

/**
 * op_pall - vdsbvdsvhds
 * @stack: jsadhdss
 * @line_number: hdashdhsad
 *
 * Return: hgasgsahgsa
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *cp_stack;
	(void)line_number;

	cp_stack = *stack;
	for (; cp_stack; cp_stack = cp_stack->next)
		printf("%d\n", cp_stack->n);
}

/**
 * op_pop - vdsbvdsvhds
 * @stack: jsadhdss
 * @line_number: hdashdhsad
 *
 * Return: hgasgsahgsa
 */
void op_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		fmonkey((*stack));
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	free(tmp);
	if (*stack)
		(*stack)->prev = NULL;
}

/**
 * op_pint - vdsbvdsvhds
 * @stack: jsadhdss
 * @line_number: hdashdhsad
 *
 * Return: hgasgsahgsa
 */
void op_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		fmonkey((*stack));
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
