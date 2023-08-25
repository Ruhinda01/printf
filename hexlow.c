#include "main.h"
/**
 * print_hexlow - prints hexlow
 * @num: number
 *
 * Return: count
 */
int print_hexlow(unsigned int num)
{
	int count = 0;
	char *str = "0123456789abcdef";

	if (num >= 16)
	{
		count += print_hexlow(num / 16);
	}
	count += _putchar(str[num % 16]);

	return (count);
}
/**
 * handle_x - handles hex low
 * @args: arguments
 *
 * Return: count
 */
int handle_x(va_list args)
{
	int count;
	unsigned int num;

	num = va_arg(args, unsigned int);
	count = print_hexlow(num);

	return (count);
}
