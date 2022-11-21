#include "main.h"

/**
  *sort_flags - enforce the preference of the flags
  *@f: flags
  *
  */
void sort_flags(flag *f)
{
	if (f->plus)
		f->space = 0;
	if (f->minus || (f->precision != -1))
		f->zero = 0;
}
/**
  *check_width - checks for width spec
  *@c: the char
  *@spec: the width spec
  *@f: the pointer to flag
  *
  *Return: 1 if width spec, 0 if not
  */
int check_width(char c, va_list spec, flag *f)
{
	int i = 0;

	if (c == '0')
	{
		if (!f->width)
		{
			f->zero = 1;
			i = 1;
		}
		else
		{
			f->width = f->width * 10 + (c - '0');
			i = 1;
		}
	}
	else if (c == '*')
	{
		f->width = va_arg(spec, int);
		i = 1;
	}
	return (i);
}

/**
  *validate_precision - checks for precision specifier
  *@ch: the given char
  *@spec: the specifier
  *@f: the pointer to the flag
  *Return: 1 if set 0 if not
  */
int validate_precision(char ch, va_list spec, flag *f)
{
	if (ch == '.')
	{
		f->precision = 0;
		return (1);
	}
	if (_isdigit(ch))
	{
		f->precision = f->precision * 10 + (ch - '0');
		return (1);
	}
	if (ch == '*')
	{
		f->precision = va_arg(spec, int);
		return (1);
	}
	return (0);
}
