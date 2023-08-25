#include "main.h"
/**
 * find_spec - finds spec
 * @fmt: specifier
 * @num: size of fmt[]
 * @specifier: from theformat
 * Return: -1
 */
int  find_spec(fmt_s *fmt, int num, char specifier)
{
	int i;

	for (i = 0; i < num; i++)
	{
		if (specifier == fmt[i].specifier)
			return (i);
	}
	return (-1);
}
/**
 * process_fmt - process fmt
 * @format: specifier
 * @list: arguments list
 * @fmt: specifiers and functions
 * @num: size of fmt
 * Return: count
 */
int process_fmt(const char *format, va_list list, fmt_s *fmt, int num)
{
	int count = 0, index;

	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			index = find_spec(fmt, num, *format);
			if (index >= 0)
				count += fmt[index].fmt(list);
			else
				return (-1);
		}
		else if (*format == '%')
		{
			return (-1);
		}
		else
			count += _putchar(*format);
		format++
	}
	return (count);
}
/**
 * _printf - performs printf
 * @format: format specs
 *
 * Return: count
 */
int _printf(const char *format, ...)
{
	va_list list;
	int count = 0;
	fmt_s fmt[] = {
		{'c', handle_char},
		{'s', handle_str},
		{'%', handle_perc},
	};
	int num = sizeof(fmt) / sizeof(fmt[0]);

	if (format == NULL)
		return (-1);

	va_start(list, format);
	count = process_fmt(format, list, fmt, num);
	va_end(list);

	return (count);
}
