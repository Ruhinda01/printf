#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>


/**
 * struct fmt - structure
 * @specifier: spec
 * @fmt: format
 *
 */
typedef struct fmt
{
	char specifier;
	int (*fmt)(va_list);
} fmt_s;

int _printf(const char *format, ...);
int _putchar(char p);
int handle_char(va_list args);
int handle_str(va_list args);
int handle_perc(va_list args);
int handle_int(va_list args);
int handle_bin(va_list args);
int handle_u(va_list args);
int handle_o(va_list args);
int handle_x(va_list args);
int handle_X(va_list args);



#endif
