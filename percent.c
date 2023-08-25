#include "main.h"
/**
 * handle_perc - handle percent
 * @args: argument list
 *
 * Return: count
 */
int handle_perc(va_list args)
{
	int count = 0;
	(void)args;

	count += _putchar('%');
	return (count);
}
