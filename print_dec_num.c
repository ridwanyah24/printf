#include "main.h"

/**
 *print_dec_num - prints a decimal munber
 *@list: lists of arguments
 *
 *Return: p
 */
int print_dec_num(va_list list)
{
	int arr[100], i = 0, k, m, p = 0;
	int dec;

	dec = va_arg(list, int);

	if (dec == 0 || !dec)
	{
		_putchar('0');
		return (1);
	}

	if (dec < 0)
	{
		_putchar('-');
		dec = -dec;
		p++;
	}

	while (dec != 0)
	{
		m = dec % 10;
		arr[i] = m;
		i++;

		dec /= 10;
	}

	for (k = i - 1; k > -1; k--, p++)
		_putchar(arr[k] + '0');

	return (p);
}
