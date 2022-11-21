#include "main.h"
/**
  *print_s - a function that prints the string
  *@s: string to print
  *@f: the given flags
  *Return: int
  */
int print_s(va_list s, flag *f)
{
	char *str = va_arg(s, char *);
	int lenght = 0, i;

	(void)f;
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; ++i)
		lenght += _putchar(str[i]);
	return (lenght);
}
