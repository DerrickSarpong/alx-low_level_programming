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
		for (; n <= 98; n++)
		{
			_putchar(n + '0');

			if (n == 98)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else
	{
		for (; n >= 98; n--)
		{
			_putchar(n + 0);

			if (n == 98)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
