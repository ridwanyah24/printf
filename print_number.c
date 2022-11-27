#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void print_number(int);
/**
  * print_number - code prints any integer
  *@c: number to be printed
  *Return: void
  */
void print_number(int c)
{
	if (c <= 9 && c >= 0)
	{
		putchar(c + 48);
	} else if (c >= -9 && c < 0)
	{
		putchar('-');
		putchar(abs(c) + 48);
	} else if (c > 9)
	{
		for (c = 10; c <= 100; c++)
		{

		}
	}
}
