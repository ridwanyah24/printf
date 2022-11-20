#include "main.h"

/**
 *print_long_dec_num - prints a long decimal integer
 *list: list of arguments
 *
 *Return: h
 */
int print_long_dec_num(va_list list)
{
	long int dec;
	unsigned long int dec_t, temp, i, div = 1, h = 0;

	dec  = va_arg(list, long int);
	if (dec < 0)
	{
		dec_t = dec * -1;
		_putchar('-');
		h++;
	}
	else
	{
		dec_t = dec;
	}

	temp = dec_t;

	while (temp > 9)
	{
		div *= 10;
		temp /= 10;
	}

	for (i = 0; div > 0; div /= 10, i++, h++)
	{
		_putchar(((dec_t / div) % 10) + '0');
	}
	return (h);
}

/**
 *print_short_dec_num - prints a short decimal integer
 *list: list of arguments
 *
 *Return: h
 */
int print_short_dec_num(va_list list)
{
	short int dec;
	unsigned short int dec_t, temp, i, div = 1, h = 0;

	dec = va_arg(list, short int);
	if (dec < 0)
	{
		dec_t = dec * -1;
		_putchar('-');
		h++;
	}
	else
	{
		dec_t = dec;
	}

	temp = dec_t;

	while (temp > 9)
	{
		div *= 10;
		temp /= 10;
	}

	for (i = 0; div > 0; div /= 10, i++, h++)
	{
		_putchar(((dec_t / div) % 10) + '0');
	}
	return (h);
}
