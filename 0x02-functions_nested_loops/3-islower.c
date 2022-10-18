#include "main.h"
/**
 * _islower - Entry point of the program
 *@c: The character to be checked
 * Return: (1) up on success of the program
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
