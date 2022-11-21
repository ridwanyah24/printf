#include "main.h"

/**
 *print_int - print to an integer
 *@list: the lists of arguments
 *
 *Return: d
 */
int print_int(va_list list)
{
	int j = 0, m, s, arr[100], d = 0;
	int num;

	num = va_arg(list, int);
	if (num == 0 || !num)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		d++;
	}

	while (num != 0)
	{
		s = num % 10;
		arr[j] = s;
		j++;

		num /= 10;
	}

	for (m = j - 1; m > -1; m--, d++)
		_putchar(arr[m] + '0');

	return (d);
}		
