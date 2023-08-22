#include "main.h"
#include <stdint.h>
/**
 * handle_p - handles address
 * @address: address to be printed
 * @buff: container
 * @idx: for flus
 * Return: number
 */
int handle_p(void *address, char *buff, int *idx)
{
	int chars_written = 0, j, digit, start_index = 0;
	char *hex = "0123456789abcdef";
	uintptr_t addr = (uintptr_t)address;


	chars_written += _putchar('0', buff, idx);
	chars_written += _putchar('x', buff, idx);
	for (j = (sizeof(addr) * 2) - 1; j >= 0; j--)
	{
		digit = (addr >> (j * 4)) & 0xF;
		if (hex[digit] != '0')
		{
			start_index = j;
			break;
		}
	}
	for (j = start_index; j >= 0; j--)
	{
		digit = (addr >> (j * 4)) & 0xF;
		chars_written += _putchar(hex[digit], buff, idx);
	}

	return (chars_written);
}
