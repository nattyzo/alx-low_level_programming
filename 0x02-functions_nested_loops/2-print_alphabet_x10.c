#include "main.h"

/**
 * print_alphabet_x10 - Entry point of the program
 *
 * Return: (0) up on sucess of the program
 */

void print_alphabet_x10(void)
{
	int x = 1;

	while (x <= 10)
	{
		char y = 'a';

		while (y <= 'z')
		{
			_putchar(y);
			y++;
		}
		x++;
		_putchar('\n');
	}
}
