#include "main.h"
/**
 * handle_char - handles characters
 * @args: argument list
 *
 * Return: count
 */
int handle_char(va_list args)
{
	int count = 0;
	int ch = va_arg(args, int);

	count += _putchar(ch);
	return (count);
}
