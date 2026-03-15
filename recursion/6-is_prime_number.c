#include "main.h"
#include <stdio.h>
/**
 * Pnumber - définir un nombre premier
 * @n: entier à tester
 * @r: entier à incrémenter
 *
 * Return: 0 si c'est divisible, 1 si ça ne l'est pas.
 */
int Pnumber(int n, int r)
{
	int d = 0;

	d = n / r;

	if (n == r * d)
		return (0);

	if (r * r < n && n != r * d)
	return (Pnumber(n, (r + 1)));


return (1);
}
/**
 * is_prime_number - fonction pour vérifier un nombre
 * @n: l'entier à vérifier
 *
 * Return: 0 si n<2 sinon renvoie à une fonction
 * de vérification de nombre premier
 */
int is_prime_number(int n)
{
	if (n < 2)
	return (0);

	return (Pnumber(n, 2));
}
