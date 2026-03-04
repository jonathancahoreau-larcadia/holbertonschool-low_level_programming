#include "main.h"

/**
 * reverse_array - echange et inverse le tableau
 * @a: un pointeur sur le premier entier
 * @n: un entier
 */

void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;
	int temp = 0;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
