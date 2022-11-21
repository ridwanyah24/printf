#include "main.h"
/**
  *print_S - print a hex string
  *@S: str
  *@f: flags
  *
  *Return: lenght of the printed str
  */
int print_S(va_list S, flag *f)
{
	char *str = va_arg(S, char *);
	int lenght = 0, i;
	char *ch;

	(void)f;
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; ++i)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			_puts("\\x");
			lenght += 2;
			ch = convert(str[i], 16, 0);
			if (_strlen(ch) == i)
			{
				lenght += _putchar('0');
				lenght += _putchar(*ch);
			}
			
			else
				lenght += _puts(ch);
		}

		else
			lenght += _putchar(str[i]);
	}

	return (lenght);
}
