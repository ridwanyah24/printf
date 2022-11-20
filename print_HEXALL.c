#include "main.h"

/**
 *print_HEXALL - print in hexadecimal number
 *@num: number to convert
 *@s: size of array
 *@type: lowercase or uppercase
 *
 *Return: g
 */
int print_HEXALL(long int num, unsigned int s, unsigned int type)
{
	unsigned int g, i;
	int *hex;
	int d;
	char t;

	if (type == 0)
		t = 'a';
	else
		t = 'A';

	if (num < 0)
		num = num * -1;

	hex = malloc(sizeof(int) * s);
	for (i = 0; i < s; i++)
		hex[i] = 0;

	for (g = 0; g < s && num != 0; g++)
	{
		hex[g] = num % 16;
		num /= 16;
	}

	for (d = g - 1; d >= 0; d--)
	{
		if (type != 0)
			_putchar('0');

		if (hex[d] < 10)
			_putchar(hex[d] + '0');

		else
			_putchar((hex[d] % 10) + t);
	}
	free(hex);
	return (g);
}
