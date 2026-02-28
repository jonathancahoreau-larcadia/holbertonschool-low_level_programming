#include "main.h"
/**
 * print_sign - fonction pour déterminer le signe d'un nombre
 * @n: le nombre
 *
 * Return: 1 si c'est positif, -1 si c'est négatif, 0 si c'est nul
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
		else
	{
		_putchar('0');
		return (0);
	}
}
