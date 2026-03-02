#include "main.h"

/**
*_puts -affiche la chaine de caractere avec retour à la ligne
*@str: est une chaine de caractère
*
*/

void _puts(char *str)
{
	int i;

	i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
