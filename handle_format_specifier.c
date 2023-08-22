#include "main.h"
/**
 * handle_format_specifier - handles the format specifiers
 * @fmt: specifiers
 * @list: arguments
 * @buff: container
 * @idx: for flush
 * Return: chars_written
 */
int handle_format_specifier(const char fmt, va_list list, char *buff, int *idx)
{
	int chars_written = 0;

	switch (fmt)
	{
		case 'c':
			chars_written = handle_char(list, buff, idx);
			break;
		case 's': case 'S':
			chars_written = handle_str(list, buff, idx);
			break;
		case '%':
			chars_written = handle_percent(buff, idx);
			break;
		case 'd': case 'i':
			chars_written = handle_num(va_arg(list, int), buff, idx);
			break;
		case 'b':
			chars_written = handle_bin(va_arg(list, unsigned int), buff, idx);
			break;
		case 'u':
			chars_written = handle_u(va_arg(list, unsigned int), buff, idx);
			break;
		case 'o':
			chars_written = handle_o(va_arg(list, unsigned int), buff, idx);
			break;
		case 'x':
			chars_written = handle_x(va_arg(list, unsigned int), buff, idx);
			break;
		case 'X':
			chars_written = handle_X(va_arg(list, unsigned int), buff, idx);
			break;
		case 'p':
			chars_written = handle_p(va_arg(list, void *), buff, idx);
			break;
		default:
			chars_written = _putchar(fmt, buff, idx);
			break;
	}
	return (chars_written);
}
