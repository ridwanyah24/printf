#include "main.h"
/**
  *print_unsign -prints an unsigned int in octal format
  *@num: the given unsigned int
  *@f: the flag
  *@base: number base
  *@lowercase: checks if lowercase hexadecimal
  *
  *Return: the lenght of the chars printed
  */
int print_unsign(va_list num, flag *f, int base, int lowercase)
{
	unsigned long int n = va_arg(num, unsigned long int);
	char *s;

	s = convert(n, base, lowercase);
	if (n > 0)
	{
		if (f->hash)
		{
			if (base == 8)
				s = str_concat("0", s);
			if (base == 16)
			{
				if (lowercase)
					s = str_concat("0x", s);
				else
					s = str_concat("0X", s);
			}
		}
	}
	if (f->precision != -1)
		s = print_precision(s, f, 0);
	else if (f->width)
		s = print_width(s, f);

	return (_puts(s));
}

/**
 * print_o - prints an unsigned int in octal format
 * @num: given unsigned int
 * @f: pointer to the given
 *
 * Return: the length of the characters printed
 */
int print_o(va_list num, flag *f)
{
	return (print_unsign(num, f, 8, 0));
}

/**
 * print_u - prints an unsigned integer
 * @integer: given unsigned int
 * @f: pointer to the given
 *
 * Return: the length of the characters printed
 */
int print_u(va_list integer, flag *f)
{
	return (print_unsign(integer, f, 10, 0));
}

/**
 * print_x - prints an unsigned int in octal format
 * @num: given unsigned int
 * @f: pointer to the given
 *
 * Return: the length of the characters printed
 */
int print_x(va_list num, flag *f)
{
	return (print_unsign(num, f, 16, 1));
}

/**
 * print_X - prints an unsigned int in octal format
 * @num: given unsigned int
 * @f: pointer to the given
 *
 * Return: the length of the characters printed
 */
int print_X(va_list num, flag *f)
{
	return (print_unsign(num, f, 16, 0));
}
