#include <stdio.h>
#include <unistd.h>


/**
 * main - print quote
 *
 * Description: prints Dora Korpar's quote
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(5, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 19);
	return (1);
}
