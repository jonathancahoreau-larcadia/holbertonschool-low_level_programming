#include "main.h"
#include <stdio.h>
/**
 * Nbrecarre - fonction pour tester un entier
 * @n: le carré de l'entier
 * @r: l'entier à élever au carré
 *
 * Return: renvoie la fonction jusqu'à ce que r*r = n puis renvoie r ou -1
 * si r*r>0
 */
int Nbrecarre(int n, int r)
{
	if (r * r == n)
		return (r);
	if (r * r > n)
		return (-1);

return (Nbrecarre(n, r + 1));
}
/**
 * _sqrt_recursion - fonction pour retrouver le carré d'un nombre
 * @n: carré d'un entier
 *
 * Return: renvoie la fonction pour trouver le carré d'un entier
 */
int _sqrt_recursion(int n)
{
	Nbrecarre(n, 0);

return (Nbrecarre(n, 0));
}
