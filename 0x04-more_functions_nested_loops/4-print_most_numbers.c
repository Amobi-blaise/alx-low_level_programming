#include "main.h"
/**
 * print_most_numbers - prints except 2 and 4
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int i;
	int = 0;

	for (i = o; i < 10; i++)
	{
		if (i == 2 || i == 4)
			i++;
		_putchar(i + '0');
	}
	_putchar('\n');
}
