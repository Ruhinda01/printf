#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>


/**
 * struct fmt - structure for formats
 * @specifier: specifier
 * @fmt: format function pointer
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
int handle_percent(va_list args);






#endif
