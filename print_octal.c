#include "main.h"

/**
 *print_octal - print to octal equivalent
 *@list: list of arguments
 *
 *Return: 1
 */
int print_octal(va_list list)
{
	unsigned int num, s, oct[100];
	int i;

	num = va_arg(list, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	for (s = 0; num != 0; s++)
	{
		oct[s] = num % 8;
		num /= 8;
	}

	for (i = s - 1; i >= 0; i--)
		_putchar(oct[i] + '0');

	return (s);
}
