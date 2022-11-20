#include "main.h"

/**
 *print_STRING - prints a string Non printable characters
 *(0 < ASCII value < 32 or >= 127) are printed this way: \x,
 *followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
 *@list: lists of arguments
 *
 *Return: 1
 */
int print_STRING(va_list list)
{
	int r, t = 0;
	char *s;
	char n[] = "(null)";

	s = va_arg(list, char *);

	if (s == NULL)
	{
		for (r = 0; n[r] != '\0'; r++)
			_putchar(n[r]);
		return (6);
	}

	for (r = 0; s[r] != '\0'; r++)
	{
		if (s[r] < 32 || s[r] >= 127)
		{
			_putchar(92);
			_putchar('x');
			print_HEXALL((long int)s[r], 2, 1);
			t += 3;
		}
		else
		{
			_putchar(s[r]);
		}
	}
	return (r + t);
}
