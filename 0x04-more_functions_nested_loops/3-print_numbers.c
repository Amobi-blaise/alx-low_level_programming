#include "main.h"
/**
 * print_numbers - a function that prints numbers, from 0 to 9
 * Return: 0-9 followed by newline
 */
void print_numbers(void)
{
	int i;
	i = 0;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}
