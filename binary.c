#include "main.h"
/**
 * print_bin - print binary
 * @ num: number
 *
 * Return: count
 */
int print_bin(unsigned int num)
{
	int count = 0;

	if (num >= 2)
	{
		count += print_bin(num / 2);
	}
	count += _putchar(num % 2 + '0');

	return (count);
}
/**
 * handle_bin - handles binary
 * @args: argument list
 *
 * Return: Count
 */
int handle_bin(va_list args)
{
	int count;
	unsigned int num = va_arg(args, unsigned int);

	count = print_bin(num);
	return (count);
}
