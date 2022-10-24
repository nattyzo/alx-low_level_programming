#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: the first number
 * @b: the second number
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;

	*a = *b;
	*b = x;


}
