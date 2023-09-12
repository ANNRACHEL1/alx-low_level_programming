#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: integer to be checked
 *
 * Return: 1 if n > 0, 0 if 0, -1 if n < 0
 */

int print_sign(int n)
{
	return (
			n > 0 ? (_putchar(43), 1) :
			n == 0 ? (_putchar(48), 0) :
			(_putchar(45), -1)
			);
}

