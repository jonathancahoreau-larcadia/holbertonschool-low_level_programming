#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - imprime tous les nombres
 * @separator: un poiteur sur un caractere constant
 * @n: un entier toujours positif constant
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list nbargs;

	if (separator == NULL)
		printf("\n");



	va_start(nbargs, n);
		printf("%d", va_arg(nbargs, unsigned int));
		for (i = 1; i < n; i++)
		{
			printf(", %d", va_arg(nbargs, unsigned int));
		}
	va_end(nbargs);
	printf("\n");
}
