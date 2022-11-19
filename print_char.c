#include "main.h"

/**
 *print_char - prints a character
 *@list: list of arguments
 *
 *Return: 1
 */
int print_char(va_list list)
{
	char v;

	v = va_arg(list, int);
	_putchar(v);

	return (1);
}
