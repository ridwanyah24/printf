#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

/**
 *struct print - struct op
 *
 *@d: the format specifier
 *@func: the function that prints data with the specifier
 */
typedef struct print
{
	char *d;
	int (*func)(va_list);
} spec;

int _printf(const char *format, ...);
int (*get_func(const char *, int))(va_list);
int _putchar(char c);
int print_char(va_list);
int print_hex(va_list);
int print_HEX(va_list);
int print_string(va_list);
int print_octal(va_list);
int print_binary(va_list);
int print_dec_num(va_list);
int print_int(va_list);
int print_percent(va_list);
int print_address(va_list);
int print_HEXALL(long int, unsigned int, unsigned int);
int print_unsigned_dec(va_list);
int print_STRING(va_list);

#endif
