#include "main.h"
/**
 * conv_size_uns - Casts a number to size
 * @num: casted number
 * @size: Number type casted
 *
 * Return: Casted num
 */
long int conv_size_uns(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
