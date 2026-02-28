#include "main.h"
/**
 * print_last_digit - fonction pour afficher le dernier chiffre
 * @n: le nombre
 *
 * Return: renvoie le digit positif
 */

int print_last_digit(int n)
{
	int d = n % 10;
		if (d < 0)

	{
		d = -d;
		_putchar(d + '0');
	}
	else
	{
		_putchar(d + '0');
	}
return (d);
}
