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
int get_flags(const char *, int);

int _putchar(char c);
int print_char(va_list);
int print_hex(va_list);
int print_HEX(va_list);
int print_string(va_list);
int print_octal(va_list);
int print_binary(va_list);
int print_dec_num(va_list);
int print_percent(va_list);
int print_address(va_list);
int print_HEXALL(long int, unsigned int, unsigned int);
int print_unsigned_dec(va_list);
int print_STRING(va_list);
int print_long_dec_num(va_list);
int print_short_dec_num(va_list);
int print_plus_dec_num(va_list);
int print_space_dec_num(va_list);
int print_long_unsigned_dec(va_list);
int print_short_unsigned_dec(va_list);
int print_long_HEX(va_list);
int print_long_hex(va_list);
int print_short_hex(va_list);
int print_short_HEX(va_list);
int print_hash_octal(va_list);
int print_long_octal(va_list);
int print_short_octal(va_list);
int print_hash_hex(va_list);
int print_hash_HEX(va_list);
int print_rev(va_list);
int print_rot13(va_list);

#endif
