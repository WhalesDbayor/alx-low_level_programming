#include "main.h"

/**
 * _abs - computes absolute value of an integer
 *
 * @n: n is an integer
 *
 * description: absolute value
 *
 * Return: n
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
