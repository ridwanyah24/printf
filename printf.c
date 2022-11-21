#include "main.h"
#include <stdarg.h>
/**
  *_printf - prints out data with formatted output
  *
  *@format: the string containing the format
  *Return: Number of characters to print
  */
int _printf(const char *format, ...)
{
	va_list ap;
	int counter = 0;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	counter = print_format(format, ap);
	_putchar(-1);
	va_end(ap);

	return (counter);
}
