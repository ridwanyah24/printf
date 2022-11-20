#include "main.h"

/**
 *print_dec_num - prints a decimal munber
 *@list: lists of arguments
 *
 *Return: 1
 */
int print_dec_num(va_list list)
{
	unsigned int arr[100], i = 0, k, p = 0;
	int j;
	unsigned int dec;

	dec = va_arg(list, unsigned int);

	if (dec == 0)
	{
		_putchar('0');
		return (1);
	}
	while (dec != 0)
	{
		k = dec % 10;
		arr[i] = k;
		i++;

		dec /= 10;
	}
	for (j = i - 1; j > -1; j--, p++)
		_putchar(arr[j] + '0');

	return (p);
}
