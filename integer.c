#include "main.h"
/**
 * print_num - prints numbers
 * @num: number
 *
 * Return: count
 */
int print_num(int num)
{
	int count = 0;
	unsigned int positive;

	if (num < 0)
	{
		count += _putchar('-');
		num = -(num);
	}
	positive = num;
	if (positive >= 10)
	{
		count += print_num(positive / 10);
	}
	count += _putchar(positive % 10 + '0');

	return (count);
}
/**
 * handle_int - handles integers
 * @args: argument list
 *
 * Return: count
 */
int handle_int(va_list args)
{
	int num, count;

	num = va_arg(args, int);
	count = print_num(num);

	return (count);
}
