#include "main.h"

/**
 * app_hexa - Append ascci
 * @buffer: chars
 * @i: Starting index
 * @ascii_code: ASSCI
 * Return: Always 3
 */
int app_hexa(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}
