#include "main.h"

/**
 * handle_u - handles unsigned int numbers
 * @num: digit
 * @buff: container
 * @idx: for flush
 * Return: chars_written
 */
int handle_u(unsigned int num, char *buff, int *idx)
{
	int chars_written = 0;

	if (num >= 10)
	{
		chars_written += handle_u(num / 10, buff, idx);
	}
	chars_written += _putchar('0' + (num % 10), buff, idx);
	return (chars_written);
}


/**
 * print_octal_recursion - recursion function
 * @num: number
 * @buff: container
 * @idx: for flush
 * Return: number
 */
int print_octal_recursion(unsigned int num, char *buff, int *idx)
{
	int chars_written = 0;

	if (num >= 8)
	{
		chars_written += print_octal_recursion(num / 8, buff, idx);
	}
	chars_written += _putchar('0' + (num % 8), buff, idx);

	return (chars_written);
}
/**
 * handle_o - handles octal numbers
 * @num: digit
 * @buffer: container
 * @index: for flush
 * Return: chars_written
 */
int handle_o(unsigned int num, char *buffer, int *index)
{
	int chars_written = 0;

	if (num == 0)
	{
		chars_written += _putchar('0', buffer, index);
	}
	chars_written += print_octal_recursion(num, buffer, index);

	return (chars_written);
}


/**
 * handle_x - handles lowercase hex
 * @num: number
 * @buff: container
 * @idx: for buffer
 * Return: number
 */
int handle_x(unsigned int num, char *buff, int *idx)
{
	int chars_written = 0;
	char *str = "0123456789abcdef";

	if (num >= 16)
	{
		chars_written += handle_x(num / 16, buff, idx);
	}
	chars_written += _putchar(str[num % 16], buff, idx);

	return (chars_written);
}

/**
 * handle_X - handles uppercase hex
 * @num: number
 * @buff: container
 * @idx: for buffer
 * Return: number
 */
int handle_X(unsigned int num, char *buff, int *idx)
{
	int chars_written = 0;
	char *s = "0123456789ABCDEF";

	if (num >= 16)
	{
		chars_written += handle_X(num / 16, buff, idx);
	}
	chars_written += _putchar(s[num % 16], buff, idx);

	return (chars_written);
}
