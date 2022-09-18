#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int r)
{
<<<<<<< HEAD
	int n;

	if (r < 0)
		n = -1 * (r % 10);
	else
		n = r % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
=======
	int last_digit = n % 10;
	if (last_digit < 0)
	last_digit *= -1 '\n';
	_putchar(last_digit + '0');
	return (last_digit);
>>>>>>> 2a0a6b85926b4bb18c136c3997ff02b67e0efa27
}
