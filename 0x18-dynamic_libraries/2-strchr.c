#include "main.h"
#include <stddef.h>

/**
 * _strchr - finds a character in a string
 * @s: the string to be searched
 * @c: the character to be found
 *
 * Return: the pointer to first occurance of c else NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *res = NULL;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			res = s + i;
			break;
		}
		i++;
	}
	if (s[i] == c)
		res = s + i;
	return (res);
}
