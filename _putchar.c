#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints characters
 * @p: characters to be printed
 * @buff: container
 * @idx: for flush
 * Return: character printed
 */

int _putchar(char p, char *buff, int *idx)
{
	if (*idx >= BUFFER_SIZE)
	{
		_flush_buffer(buff, idx);
	}
	buff[*idx] = p;
	(*idx)++;
	return (1);
}
