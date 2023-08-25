#include "main.h"
/**
 * handle_percent - handles percent sign
 * @args: arguments list
 *
 * Return: count
 */
int handle_percent(va_list args)
{
	int count = 0;
	(void)args;

	count += _putchar('%');
	return (count);
}
