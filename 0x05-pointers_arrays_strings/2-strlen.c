#include "main.h"

/**
 * _strlen - finds the lengt of a string
 * @s: the string to be checked
 *
 * Return: On success, it return the length of the string
 */
int _strlen(char *s)
{
	int i, len;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
