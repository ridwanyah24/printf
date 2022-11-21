#include "main.h"
/**
  *_isalpha - checks if a char is alpha
  *@c: the char
  *
  *Return: 1 if alpha, else 0
  */
int _isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/**
  *rot13 - encodes a string using rot13
  *@s: the given string
  *@f: pointer to flag
  *
  *Return: char len printed
  */
int rot13(va_list s, flag *f)
{
	int i , j, lenght = 0;
	char *encode0 = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";
	char *encode1 = "nopqrstuvwxyzNOPQRSTUVWXYZabcdefghijklmABCDEFGHIJKLM";
	char *str = va_arg(s, char *);

	(void)f;
	if(str == NULL)
	{
		return (_puts("(null)"));
	}
	for (i = 0; str[i]; ++i)
	{
		if (_isalpha(str[i]))
		{
			for (j = 0; encode0[j]; ++j)
			{
				if (str[i] == encode0[j])
				{
					lenght += _putchar(encode1[j]);
					break;
				}
			}
		}
		else
			lenght += _putchar(str[i]);
	}
	return (lenght);
}

/**
  *rev_string - reverse a given string
  *@str: the string to be reversed
  *@f: pointer to flag
  *
  *Return: len of chars printed
  */
int rev_string(va_list str, flag *f)
{
	char *s = va_arg(str, char *);
	int i = 0, j;

	(void)f;
	if (s == NULL)
		s = "(null)";
	while (s[i])
		i++;
	for (j = i - 1; j >= 0; --j)
		_putchar(s[j]);
	return (i);
}
