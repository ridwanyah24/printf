#include "main.h"

/**
 *_printf - write a function that produces output according to a format
 *@format: pointer to character string
 *
 *Return: number of characters
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, j = 0;
	int (*list_func)(va_list);

	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);

	if (!format[i])
		return (0);

	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			list_func = get_func(format, i + 1);

			if (list_func == NULL)
			{
				_putchar('%');
				j++;
			}
			else
			{
				j += list_func(list);
				i++;
			}

		}
		else
		{
			_putchar(format[i]);
			j++;
		}
	}
	va_end(list);
	return (j);
}

