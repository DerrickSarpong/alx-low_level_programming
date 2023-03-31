#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: copy up to position n
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;
	char *temp = dest, *start = src;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		len++;
		src++;
	}

	if (n > len)
	{
		n = len;
	}
	
	src = start;

	for (; i < n; i++)
	{
		*dest++ = *src++;
	}

	*dest = '\0';
	return (temp);
}
