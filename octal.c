#include "main.h"
/**
 * print_octal_recurs - recursive printing
 * @num: number
 *
 * Return: count
 */
int print_octal_recurs(unsigned int num)
{
	int count = 0;

	if (num == 0)
	{
		count += _putchar('0');
	}

	if (num >= 8)
	{
		count += print_octal_recurs(num / 8);
	}
	count += _putchar(num % 8 + '0');

	return (count);
}
/**
 * print_octal - prints octal
 * @num: number
 *
 * Return: count
 */
int print_octal(unsigned int num)
{
	int count = 0;

	if (num == 0)
	{
		count += _putchar('0');
	}
	count += print_octal_recurs(num);
	return (count);
}
/**
 * handle_o - handles octal
 * @args: argument list
 *
 * Return: count
 */
int handle_o(va_list args)
{
	int count;
	unsigned int num;

	num = va_arg(args, unsigned int);
	count = print_octal(num);

	return (count);
}
