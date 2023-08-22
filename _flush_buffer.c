#include "main.h"
#include <unistd.h>
/**
 * _flush_buffer - writes characters and resets index
 * @buff: container
 * @idx: characters in buffer currently
 * Return: none
 */
void _flush_buffer(char *buff, int *idx)
{
	write(1, buff, *idx);

	*idx = 0;
}
