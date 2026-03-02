#include "main.h"

/**
*print_rev - affiche la chaine de caractere à l'envers puis retour à la ligne
*@s: est une chaine de caractère
*
*/
void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
