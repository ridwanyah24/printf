#include "main.h"
/**
  *_putchar - writes a character to standard output
  *@c: the character
  *
  *Return: 1 if true -1 if false
  */
int _putchar(char c)
{
	static int i;
	static char buffer[1024];

	if (c == -1 || i >= 1024)
	{
		write(1, &buffer, i);
		i = 0;
	}
	if (c != -1)
	{
		buffer[i] = c;
		i++;
	}
	return (1);
}
/**
  *_puts - prints a string on the stdout
  *@str: the string
  *
  *Return: 1
  */
int _puts(char *str)
{
	int i;

	if (str)
	{
		for (i = 0; str[i]; i++)
		{
			_putchar(str[i]);
		}
	}
	return (1);
}

/**
  *_strlen - returns the lenght of a string
  *@str: the string
  *
  *Return: integer which is the lenght of the string
  */
int _strlen(char *str)
{
	int i = 0;

	if(str)
	{
		while (str[i])
		{
			i++;
		}
	}
	return (i);
}

/**
  *str_concat - concatenates two strings
  *@s1: the first string
  *@s2: the second string
  *
  *Return: pointer to the concatenated string
  */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, size;
	char *str;

	size = _strlen(s1) + _strlen(s2) + 1;
	str = malloc(sizeof(char) * size);

	if (str)
	{
		if (s1)
		{
			for (; s1[i]; ++i)
			{
				*(str + i) = *(s1 + i);
			}
		}
		if (s2)
		{
			for (; s2[j]; ++j, ++i)
			{
				*(str + i) = *(s2 + j);
			}
		}
		*(str + i) = '\0';
	}
	return (str);
}
