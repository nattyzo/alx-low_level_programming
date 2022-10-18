#include "main.h"

/**
 * print_alphabet - Entry point of the program
 *
 * Return: (0) up on success of the program
 */

void print_alphabet(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
