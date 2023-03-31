#include "main.h"

/**
* _strncpy - Copies a string
* @dest: destination of the copied string
* @src: string to be copied
* @n: length of string
* Return: a pointer to the destination *dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
