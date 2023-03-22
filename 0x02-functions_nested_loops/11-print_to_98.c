#include "main.h"

/**
 * print_to_98 - Check main
 * @n: input integer to start from
 * Description: Counting to 98 from specified integer
 * Return: nothing.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n > 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else
	{
		while (n >= 98)
		{
			_putchar(n + 0);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
