#include "main.h"

/**
 *print_unsigned_dec - prints an unsigned decimal number
 *@list: list of arguments
 *
 *Return: 1
 */
int print_unsigned_dec(va_list list)
{
	unsigned int arr[100], r = 0, s, j = 0;
	int i;
	unsigned int dec;

	dec = va_arg(list, unsigned int);

	if (dec == 0)
	{
		_putchar('0');
		return (1);
	}

	while (dec != 0)
	{
		s = dec % 10;
		arr[r] = s;
		r++;

		dec /= 10;
	}

	for (i = r - 1; i > -1; i--, j++)
		_putchar(arr[i] + '0');

	return (j);
}
