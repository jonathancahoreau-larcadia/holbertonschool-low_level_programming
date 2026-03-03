#include "main.h"
#include <stdio.h>

/**
*print_array - affiche les valeurs d'un tableau
*@a: est un entier
*@n: est un entier
*
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i <= (n - 1); i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");

}
