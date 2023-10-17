#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: the pointer to the string
 *
 * Return: the length of the  string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
