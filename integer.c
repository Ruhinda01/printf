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

	if (num < 0)
	{
		count += _putchar('-');
		num = -(num);
	}
	if (num >= 10)
	{
		print_num(num / 10);
	}
	count += _putchar(num % 10 + '0');

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
