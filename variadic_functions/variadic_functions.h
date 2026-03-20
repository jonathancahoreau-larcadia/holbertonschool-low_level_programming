#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct capture - Struct capture
 *
 * @letter: la lettre à comparer
 * @call_func: le pointeur sur fonction
 */
typedef struct capture
{
	char letter;
	void (*call_func)(va_list *args);
}
capt_t;

void print_all(const char * const format, ...);

#endif
