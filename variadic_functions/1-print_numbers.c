#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - imprime tous les nombres
 * @separator: un pointeur sur une chaine de caractere
 * @n: un entier toujours positif constant
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list nbargs;

	va_start(nbargs, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(nbargs, int));
			if (separator != NULL && i < (n - 1))
				printf("%s", separator);
		}
	va_end(nbargs);
	printf("\n");
}
