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
	int i;

	name = strtok(buf, " \n\t");
	temp = strtok(NULL, " \n\t");
	if (temp)
	{
		for (i = 0; temp[i]; i++)
		{
			if (_isdigit(temp[i]))
				batm.data = temp;
			else
			{
				fprintf(stderr, "L%u: usage: push integer\n",
					line_number);
				fmonkey((*stack));
				exit(EXIT_FAILURE);
			}
		}
	}
	if (name)
		get_opcode(stack, line_number, name);
}
