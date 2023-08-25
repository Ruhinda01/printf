#include "main.h"
/**
 * handle_str - handles strings
 * @args: arguments list
 *
 * Return: count
 */
int handle_str(va_list args)
{
	int count = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		if (*str == '\\')
		{
			str++;
			switch (*str)
			{
				case 'n':
					count += _putchar('\n');
					break;
				case 't':
					count += _putchar('\t');
					break;
				default:
					count += _putchar('\\');
					count += _putchar(*str);
			}
		}
		else
		{
			count += _putchar(*str);
		}
		str++;
	}
	return (count);
}
