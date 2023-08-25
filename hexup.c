#include "main.h"
/**
 * print_hexup - prints hexup
 * @num: number
 *
 * Return: count
 */
int print_hexup(unsigned int num)
{
	int count = 0;
	char *s = "0123456789ABCDEF";

	if (num >= 16)
	{
		count += print_hexup(num / 16);
	}
	count += _putchar(s[num % 16]);

	return (count);
}
/**
 * handle_X - handles hexup
 * @args: argument list
 *
 *
 * Return: count
 */
int handle_X(va_list args)
{
	int count;
	unsigned int num;

	num = va_arg(args, unsigned int);
	count = print_hexup(num);

	return (count);
}
