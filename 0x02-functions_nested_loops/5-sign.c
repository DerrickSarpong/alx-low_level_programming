#include "main.h"

/**
 * print_sign - Check main
 * @n: An input character
 * Description: Returns 1 if n is greater than 0,
 * 0 if n is 0, -1 if n is less than 0.
 * Return: 1 , 0 or -1 .
 */

int print_sign(int n)
{
	int val;

	if (n > 0)
	{
		val = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		val = 0;
		_putchar('0');
	}
	else
	{
		val = -1;
		_putchar('-');
	}
	
	return (val);
}
