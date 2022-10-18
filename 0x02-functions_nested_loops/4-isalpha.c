#include "main.h"
/**
 * _isalpha - The entry point of the program
 * @c: The variable to be checked
 *
 * Return: (1) up on successful complition of the program
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
