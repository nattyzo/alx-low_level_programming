#include "main.h"

/**
 * print_sign - Entry point of the program
 * @n: The value to be checked
 *
 * Return: (1) up on successful complition of the program
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
