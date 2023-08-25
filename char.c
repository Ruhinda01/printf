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

	if (ch == '\0')
		return (-1);
	count += _putchar(ch);
	return (count);
}
