#include "main.h"
/**
  *get_func - gets the appropriate function for the specified format
  *@str: the format string
  *@n: the index of the structure
  *Return: pointer to the function
  */
int (*get_func(const char* str, int n))(va_list ap)
{
	pfunc funcs[] = {
		{"c", print_char}, {"s", print_str}, {"%", print_percentage}
	};
	int i = 0;

	if (str)
	{
		while (funcs[i].format_func != NULL)
		{
			if (funcs[i].format_text[0] == str[n])
			{
				return (funcs[i].format_func);
			}
			i++;
		}
	}
	return (NULL);
}
