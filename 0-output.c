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
<<<<<<< HEAD:working_dir/0-output.c
	int i, j = 0;
	int (*ptr_n)(va_list);
=======
	int i = 0, j = 0;
	int (*list_func)(va_list);
>>>>>>> 85ffb8951e08dbfb0274e0112231c23d512a58a1:0-output.c

	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);

	if (!format[i])
		return (0);

	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
<<<<<<< HEAD:working_dir/0-output.c
			ptr_n = get_func(format, i + 1);
=======
			list_func = get_func(format, i + 1);
>>>>>>> 85ffb8951e08dbfb0274e0112231c23d512a58a1:0-output.c

			if (list_func == NULL)
			{
				_putchar('%');
				j++;
			}
			else
			{
<<<<<<< HEAD:working_dir/0-output.c
				j += ptr_n(list);
=======
				j += list_func(list);
>>>>>>> 85ffb8951e08dbfb0274e0112231c23d512a58a1:0-output.c
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

