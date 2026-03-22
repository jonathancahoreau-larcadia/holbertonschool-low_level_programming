#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - fonction pour additionner tous les int
 * @n: un entier représentant le nombre d'entiers à additionner
 *
 * Return: le total de l'addition de tous les entiers, (O) si n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int total = 0;

	va_list args;

	va_start(args, n);
		for (i = 0; i < n; i++)
		{
			total = total + va_arg(args, unsigned int);
		}
	va_end(args);
	return (total);
}
