#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		if (n == 0)
		{
			goto here;
		}
		putchar(',');
		putchar(' ');
here:
		putchar((n % 10) + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
