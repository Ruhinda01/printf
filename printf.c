#include "main.h"
/**
 * _printf - performs printf function
 * @format: format specs
 *
 * Return: count
 */
int _printf(const char *format, ...)
{
	va_list list;
	int count = 0, num, i, found_specifier = 0;
	fmt_s fmt[] = {
		{'c', handle_char},
		{'s', handle_str},
		{'%', handle_percent},
	};

	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			num = sizeof(fmt) / sizeof(fmt[0]);
			for (i = 0; i < num; i++)
			{
				if (*format == fmt[i].specifier)
				{
					count += fmt[i].fmt(list);
					found_specifier = 1;
					break;
				}
			}
			if (!found_specifier)
			{
				count += _putchar('%');
				count += _putchar(*format);
			}
		}
		else
			count += _putchar(*format);
		format++;
	}
	va_end(list);
	return (count);
}
