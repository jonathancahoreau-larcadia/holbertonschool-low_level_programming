#include "main.h"
/**
 * _isdigit - vérifie si c'est un nombre
 * @c: est le caractere
 *
 * Return: 1 si c'est un nombre, 0 pour le reste
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
