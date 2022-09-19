#include "main.h"

/**
 * swap_int - Integers to be swapped
 * @a: First integer
 * @b: second integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swp = *a;

	*a = *b;
	*b = swp;
}
