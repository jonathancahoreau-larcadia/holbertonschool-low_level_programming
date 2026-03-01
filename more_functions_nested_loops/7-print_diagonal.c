#include "main.h"
/**
 *print_diagonal - Imprime une diagonale
 *@n: le nombre de fois
 *
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < j; i++)
			{
			_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}


	}
	else
	{
		_putchar('\n');
		}

}
