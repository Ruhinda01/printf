#include "main.h"
/**
 * _printf - printf function
 * @format: format specifiers
 *
 * Return: count
 */
int _printf(const char *format, ...)
{
	va_list list;
	char buff[BUFFER_SIZE];
	int count = 0, chars_written = 0, idx = 0;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			chars_written = handle_format(format, list, buff, &idx);
			chars_written = handle_format_specifier(*format, list, buff, &idx);
			if (chars_written < 0)
			{
				va_end(list);
				return (-1);
			}
			count += chars_written;
		}
		else
		{
			if (idx >= BUFFER_SIZE)
			{
				_flush_buffer(buff, &idx);
			}
			buff[idx++] = *format;
			count++;
		}
		format++;
	}
	_flush_buffer(buff, &idx);
	va_end(list);
	return (count);
}
