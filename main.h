#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
/**
  *struct print_func - structure to print data
  *@char: the format text
  *@format_func: the format functions
  */
typedef struct print_func
{
	char *format_text;
	int (*format_func)(va_list);
}pfunc;

int print_percentage(va_list);
int print_str(va_list);
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int (*get_func(const char *, int))(va_list);
#endif
