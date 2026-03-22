#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * func_char - fonction affiche un char
 * @args: un argument
 */
void func_char(va_list *args)
{
	printf("%c", va_arg(*args, int));
}
/**
 * func_int - fonction affiche un int
 * @args: un argument
 */
void func_int(va_list *args)
{
	printf("%d", va_arg(*args, int));
}
/**
 * func_float - fonction affiche un float
 * @args: un argument
 */
void func_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}
/**
 * func_string - fonction affiche un string
 * @args: un argument
 */
void func_string(va_list *args)
{
	char *string = va_arg(*args, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}

/**
 * print_all - affiche tout
 * @format: caractere constant qui renvoie à une adresse constante
 */
void print_all(const char * const format, ...)
{
	capt_t tab_format[] = {
	{'c', func_char},
	{'i', func_int},
	{'f', func_float},
	{'s', func_string},
	{'\0', NULL}
	};

	va_list args;
	int i = 0;
	int j = 0;
	char *virg = "";

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		j = 0;
		while (tab_format[j].letter != '\0')
		{
			if (tab_format[j].letter == format[i])
			{
				printf("%s", virg);
				tab_format[j].call_func(&args);
				virg = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
