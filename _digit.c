#include "main.h"
/**
 * _digit - Verifies digit char
 * @c: evaluated char
 *
 * Return: 1 if c is digit, 0 otherwise
 */
int _digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
