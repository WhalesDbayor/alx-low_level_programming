#include "main.h"

/**
 * print_line - prints a line of length n
 * @n: length of line
 *
 * Return: void
 */

void print_line(int n)
{
	int line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
