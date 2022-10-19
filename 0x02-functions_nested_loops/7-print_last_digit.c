#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: the passed args
 * Return: return the last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		x = -1 * (n % 10);
	else
	x = n % 10;
	
	_putchar((x % 10) + (n % 10);
	return (x % 10);
}
