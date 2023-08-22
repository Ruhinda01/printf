#include "main.h"
/**
 * s_print - Checks if  char is printable
 * @c: Char being checked
 *
 * Return: 1 if char is printable, 0 otherwise
 */
int s_print(char c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
