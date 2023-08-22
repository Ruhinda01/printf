#include "main.h"
/**
 * conv_size_num - casts number to specified size
 * @num: Number
 * @size: Number type
 *
 * Return: Casted num
 */
long int conv_size_num(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}
