#include "main.h"

/**
*puts2 -affiche la chaine de caractere de 2 en 2 avec retour à la ligne
*@str: est une chaine de caractère
*
*/

void puts2(char *str)
{
	int i;

	i = 0;

	while (i != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
