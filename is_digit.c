#include "monty.h"

/**
 * _isdigit - check if it is a digit or no
 * @c: char to be check
 *
 * Return: 0 if success, 1 if failed
 */
int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}
