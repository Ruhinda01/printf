#include "main.h"
/**
 * _putchar - prints output
 * @p: character to be printed
 *
 * Return: character
 */
int _putchar(char p)
{
	return(write(1, &p, 1));
}
