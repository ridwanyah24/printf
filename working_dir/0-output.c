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
	int i, j = 0;
	int (*get_func)(va_list);

	if (get_func == NULL)
		return (0);

	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			get_func = get_func(format, i + 1);

			if (get_func == NULL)
			{
				_putchar('%');
				j++;
			}
			else
			{
				j += get_func(list);
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

