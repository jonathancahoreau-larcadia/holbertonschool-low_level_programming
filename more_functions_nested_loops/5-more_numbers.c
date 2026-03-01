#include "main.h"
/**
 *more_numbers - affiche 10x les nombres de 0 à 14
 */

void more_numbers(void)
{
	int i;
	int j;

		for (j = 1; j <= 10; j++)
		{
			for (i = 0; i <= 14; i++)
			{
				if (i >= 10)
				{
					_putchar('0' + (i / 10));
				}
				else
				{
					_putchar('0' + (i % 10));
				}
			}
		_putchar('\n');
		}
}
