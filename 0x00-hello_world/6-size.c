#include <stdio.h>


/**
 * main - size of various types 
 *
 * Description: a C program that prints the size of various types on the computer it is compiled and run on.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	puts("Size of a char: %d byte(s)\n", (int) sizeof(char));
	puts("Size of an int: %d byte(s)\n", (int) sizeof(int));
	puts("Size of a long int: %d byte(s)\n", (int) sizeof(long int));
	puts("Size of a long long int: %d byte(s)\n", (int) sizeof(long long int));
	puts("Size of a float: %d byte(s)\n", (int) sizeof(float));
	return (0);
}
