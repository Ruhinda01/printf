#include "main.h"
/**
 * handle_flags - handles flags
 * @fmt: flags
 * @plus: counter for plus
 * @space: counter for space
 * @hash: counter for hash
 * Return: nine
 */
void handle_flags(const char **fmt, int *plus, int *space, int *hash)
{
	while (**fmt == '+' || **fmt == ' ' || **fmt == '#')
	{
		if (**fmt == '+')
			*plus = 1;
		else if (**fmt == ' ')
			*space = 1;
		else if (**fmt == '#')
			*hash = 1;
		(*fmt)++;
	}
}
/**
 * handle_format - handles flags and specifiers
 * @format: flags and specifiers
 * @list: arguments
 * @buff: container
 * @idx: for flush
 * Return: 0
 */
int handle_format(const char *format, va_list list, char *buff, int *idx)
{
	int num, plus_flag = 0, space_flag = 0, hash_flag = 0, chars_written = 0;
	unsigned int digit;

	handle_flags(&format, &plus_flag, &space_flag, &hash_flag);

	if (*format == 'd' || *format == 'i')
	{
		num = va_arg(list, int);
		if (plus_flag && num >= 0)
			chars_written += _putchar('+', buff, idx);
		else if (space_flag && num >= 0)
			chars_written += _putchar(' ', buff, idx);
		chars_written += handle_num(num, buff, idx);
	}
	else if (*format == 'o')
	{
		digit = va_arg(list, unsigned int);
		if (hash_flag)
			chars_written += _putchar('0', buff, idx);
		chars_written += handle_o(digit, buff, idx);
	}
	else if (*format == 'x' || *format == 'X')
	{
		digit = va_arg(list, unsigned int);
		if (hash_flag)
		{
			chars_written += _putchar('0', buff, idx);
			chars_written += _putchar(*format, buff, idx);
		}
		chars_written += (*format == 'x') ? handle_x(digit, buff, idx) :
			handle_X(digit, buff, idx);
	}
	return (chars_written);
}
