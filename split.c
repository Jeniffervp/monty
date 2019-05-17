#include "monty.h"
/**
 * split - function that generates tokens
 * @buf: buffer that keeps lines
 * @stack: Doubly linked list that makes the stack
 * @line_number: Counter of lines in the file
 *
 * Return: nothing
 */

void split(char *buf, stack_t **stack, unsigned int line_number)
{
	char *name, *temp;

	name = strtok(buf, " \n\t");
	temp = strtok(NULL, " \n\t");
	batm.data = temp;
	if (name && name[0] != '#')
		get_opcode(stack, line_number, name);
}
