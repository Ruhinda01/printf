#include "main.h"
/**
 * print_hexup - prints hex uppercase
 * @num: number to be printed
 * @buff: container
 * @idx: for flush
 * Return: number
 */
int print_hexup(unsigned int num, char *buff, int *idx)
{
	int chars_written = 0;
	char *s = "0123456789ABCDEF";

	if (num >= 16)
	{
		chars_written += print_hexup(num / 16, buff, idx);
	}
	if (num < 16)
	{
		chars_written += _putchar('0', buff, idx);
	}
	chars_written += _putchar(s[num % 16], buff, idx);

	return (chars_written);
}
