#include "main.h"
/**
 * handle_str - handles strings
 * @args: arguments list
 *
 * Return: count
 */
int handle_str(va_list args)
{
	int count = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		count += _putchar(*str);
		str++;
	}
	return (count);
}
