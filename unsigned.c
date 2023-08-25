#include "main.h"
/**
 * print_u - prints unsigned
 * @num: number
 *
 * Return: count
 */
int print_u(unsigned int num)
{
	int count = 0;

	if (num >= 10)
	{
		count += print_u(num / 10);
	}
	count += _putchar(num % 10 + '0');

	return (count);
}
/**
 * handle_u - handles unsigned ints
 * @args: argument list
 *
 * Return: count
 */
int handle_u(va_list args)
{
	int count;
	unsigned int num;

	num = va_arg(args, unsigned int);
	count = print_u(num);

	return (count);
}
