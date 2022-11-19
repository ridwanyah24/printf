#include "main.h"

/**
 *print_binary - print to binary equivalent
 *@list: lists of arguments\
 *
 *Return: 1
 */
int print_binary(va_list list)
{
	unsigned int s, num, bin[100];
	int r;

	num = va_arg(list, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	for (s = 0; num != '\0'; s++)
	{
		bin[s] = num % 2;
		num /= 2;
	}

	for (r = s - 1; r >= 0; r--)
		_putchar(bin[r] + '0');

	return (s);
}
