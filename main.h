#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

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



#endif
