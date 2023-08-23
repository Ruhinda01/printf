#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <unistd.h>

#define BUFFER_SIZE 1024
#define UNUSED(x) (void)(x)

#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Struct op
 *
 * @fmt: format
 * @func: function associated
 */
struct fmt
{
	char fmt;
	int (*func)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt f_t - Struct op
 *
 * @fmt: func fomart
 * @f_t: Associated function
 */
typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int _putchar(char p, char *buff, int *idx);
int handle_num(int num, char *buff, int *idx);
int handle_bin(unsigned int num, char *buff, int *idx);
int handle_char(va_list list, char *buff, int *idx);
int handle_str(va_list list, char *buff, int *idx);
int handle_percent(char *buff, int *idx);
int handle_format_specifier(const char fmt, va_list list, char *buff, int *idx);
int handle_u(unsigned int num, char *buff, int *idx);
int handle_o(unsigned int num, char *buff, int *idx);
int handle_x(unsigned int num, char *buff, int *idx);
int handle_X(unsigned int num, char *buff, int *idx);
void _flush_buffer(char *buff, int *idx);
int handle_p(void *address, char *buff, int *idx);
int print_hexup(unsigned int num, char *buff, int *idx);
int handle_format(const char *format, va_list list, char *buff, int *idx);

int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);
int print_reverse(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_rot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);
#endif
