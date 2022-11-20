#include "main.h"

/**
 *print_HEX - prints in hexadecimal lower case
 *@list: list of arguments
 *
 *Return: 1
 */
int print_HEX(va_list list)
{
	unsigned int hex[100], r, num;
	int i;

	num = va_arg(list, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	for (r = 0; num != 0; r++)
	{
		hex[r] = num % 16;
		num /= 	16;
	}
	for (i = r - 1; i >= 0; i--)
	{
		if (hex[i] < 10)
		{
			_putchar(hex[i] + '0');
		}
		else
		{
			_putchar((hex[i] % 10) + 'A');
		}
	}

	return (r);
}
