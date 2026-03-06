#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - affiche la somme des diagonales
 * @a: le nombre de lignes
 * @size : le nombre de colonnes
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int s1, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i * size + i];
		s2 = s2 + a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", s1, s2);

}
