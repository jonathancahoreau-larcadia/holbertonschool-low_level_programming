#include "main.h"
/**
 * times_table - affiche une table de multiplication jusqu'à 9
 *
 * Return: rien n'est renvoyé
 */

void times_table(void)
{
	int i, j, r;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			r = i * j;

			if (j == 0)
			{
				_putchar('0' + r);
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (r < 10)
				{
					_putchar(' ');
					_putchar('0' + r);
				}
				else
				{
					_putchar('0' + (r / 10));
					_putchar('0' + (r % 10));
				}
			}

		}
	_putchar('\n');
	}
}
