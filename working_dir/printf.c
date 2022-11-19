#include "main.h"
/**
  *_printf- prints out data
  *@format: the string format specifier
  *Return: integer
  */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	int (*fn_pnt)(va_list);

	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);
	if (!format[i])
		return (0);
	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				return (-1);
			}
			fn_pnt = get_func(format, i + 1);
			if (fn_pnt == NULL)
			{
				_putchar('%');
				j++;
			}else
			{
				j += fn_pnt(ap);
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			j++;

		}
	}
	return (j);
}
