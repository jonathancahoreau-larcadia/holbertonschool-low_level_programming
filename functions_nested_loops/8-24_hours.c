#include "main.h"
/**
 * jack_bauer - fonction pour afficher un compteur horaire
 *
 * Return: renvoie rien
 */
void jack_bauer(void)
{
	int i;
	int h, m;

	for (i = 0; i < 1440; i++)
		{
		h = i / 60;
		m = i % 60;

		_putchar('0' + (h / 10));
		_putchar('0' + (h % 10));
		_putchar(':');
		_putchar('0' + (m / 10));
		_putchar('0' + (m % 10));
		_putchar('\n');
		}
}
