#include "main.h"
/**
 * print_line - affiche une ligne
 * @n: la longueur de la ligne
 *
 */

void print_line(int n)
{
	int i;

	i = 0;

	if (n > 0)
	{
		while (i < n)
		{
		_putchar('_');
		i++;
		}
	_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
