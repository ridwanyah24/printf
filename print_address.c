#include "main.h"

/**
 *print_address - prints address of a character
 *@list: list of arguments
 *
 *Return: 1
 */
int print_address(va_list list)
{
	int j, c;
	void *s;
	long int adr;
	char n[] = "(nil)";

	s = va_arg(list, void *);
	if (s == NULL)
	{
		for (j = 0; n[j] != '\0'; j++)
			_putchar(n[j]);
		return (5);
	}

	adr = (long int)s;

	_putchar('0');
	_putchar('x');
	c = print_HEXALL(adr, 12, 0);

	return (2 + c);

}
