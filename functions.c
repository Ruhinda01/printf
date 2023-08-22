#include "main.h"

/**
 * handle_char - handles characters
 * @list: characters
 * @buff: container
 * @idx: for flush
 * Return: character
 */
int handle_char(va_list list, char *buff, int *idx)
{
	return (_putchar(va_arg(list, int), buff, idx));
}


/**
 * handle_str - handles strings
 * @list: the string to be printed
 * @buff: container
 * @idx: for flush
 * Return: count
 */
int handle_str(va_list list, char *buff, int *idx)
{
	const char *str = va_arg(list, const char *);
	int count = 0;

	if (str == NULL)
		return (-1);
	while (*str != 0)
	{
		if (*str < 32 || *str >= 127)
		{
			count += _putchar('\\', buff, idx);
			count += _putchar('x', buff, idx);
			print_hexup((unsigned char)*str, buff, idx);
			count += 2;
		}
		else
		{
			count += _putchar(*str, buff, idx);
		}
		str++;
	}
	return (count);
}


/**
 * handle_percent - handles the percent
 * @buff: container
 * @idx: for flush
 * Return: %
 */
int handle_percent(char *buff, int *idx)
{
	return (_putchar('%', buff, idx));
}


/**
 * handle_num - handles numbers
 * @num: integers
 * @buff: container
 * @idx: for flush
 * Return: chars_written
 */
int handle_num(int num, char *buff, int *idx)
{
	int chars_written = 0;

	if (num < 0)
	{
		_putchar('-', buff, idx);
		num = -(num);
	}
	if (num >= 10)
	{
		chars_written += handle_num(num / 10, buff, idx);
	}
	chars_written += _putchar(('0' + (num % 10)), buff, idx);

	return (chars_written);
}


/**
 * handle_bin - handles binary numbers
 * @num: integer
 * @buff: container
 * @idx: for flush
 * Return: chars_written
 */
int handle_bin(unsigned int num, char *buff, int *idx)
{
	int chars_written = 0;

	if (num >= 2)
	{
		chars_written += handle_bin(num / 2, buff, idx);
	}
	chars_written += _putchar(('0' + (num % 2)), buff, idx);

	return (chars_written);
}
