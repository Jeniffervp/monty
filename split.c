#include "monty.h"
/**
 * split - bsabjasba
 * @buf: jkasdbkjasdk
 * @stack: gsasdgsada
 * @line_number: bjhadsbdsb
 *
 * Return: nkjsdabakdhashd
 */

void split(char *buf, stack_t **stack, unsigned int line_number)
{
	char *name, *temp;

	name = strtok(buf, " \n\t");
	temp = strtok(NULL, " \n\t");
	if (temp)
		batm.data = atoi(temp);
	if (name)
		get_opcode(stack, line_number, name);
}
