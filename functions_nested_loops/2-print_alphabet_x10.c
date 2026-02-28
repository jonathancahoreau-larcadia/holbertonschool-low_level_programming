#include "main.h"
/**
 * print_alphabet - imprime l'alphabet en minuscules suivi d'un saut de ligne
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
_putchar('\n');
}

/**
 * print_alphabet_x10 - imprime l'alphabet dix fois
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	print_alphabet();

}
