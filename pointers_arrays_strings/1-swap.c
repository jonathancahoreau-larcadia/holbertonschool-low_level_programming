#include "main.h"
/**
*swap_int - interverti deux valeurs
*@a: est un pointeur qui correspond à une valeur à modifier
*@b: est un pointeur qui correspond à une valeur à modifier
*
*/

void swap_int(int *a, int *b)
{
	int intermed = *a;
	*a = *b;
	*b = intermed;
}
