#include "main.h"
#include <stdio.h>
/**
 * factorial - factoriel d'un nombre
 * @n: un entier
 *
 * Return: la valeur n! et retourne -1 si n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 1)
	{
		n = n * factorial(n - 1);
	}
	return (n);
}
