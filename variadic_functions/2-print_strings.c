#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - imprime une chaine de caractere
 * @separator: pointeur vers une chaine de caractere
 * @n: un entier positif indiquant le nombre de chaine à imprimer
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nbstr;
	unsigned int i = 0;
	char *str;

	va_start(nbstr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(nbstr, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	va_end(nbstr);
	printf("\n");
}
