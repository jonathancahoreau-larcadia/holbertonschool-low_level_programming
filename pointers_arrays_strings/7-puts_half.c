#include "main.h"

/**
*_strlen - calcul la longeur d'une chaine
*@s: est une chaine de caractère
*
*Return: renvoie le nombre de boucles jusqu'au caractère de fin '\0'
*/
int _strlen(char *s)
{
	int i;

	i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
*puts_half -affiche la moitiée d'une chaine de caractere/ retour à la ligne
*@str: est une chaine de caractère
*
*/

void puts_half(char *str)
{


	int n = (_strlen(str) + 1) / 2;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
