#include "main.h"
#include <string.h>
/**
  *_printf - produces output according to a format
  *@format: the format
  *Return: integer
  */
int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int i, j, k = 0;
	char *string;

	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 's')
			{
				string = va_arg(ap, char*);
				for (j = 0; string[j] != '\0'; j++)
				{
					_putchar(string[j]);
				}
				k++;
			}
			if (format[i + 1] == 'c')
			{
				k++;
				_putchar(va_arg(ap, int));
			}
			if (format[i + 1] == '%')
			{
				k++;
				_putchar('%');
			}
		}
		else
		{
			_putchar(format[i]);
		}
	}
	return (0);
}
