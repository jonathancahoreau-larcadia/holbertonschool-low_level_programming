#ifndef VARIADIC_H
#define VARIADIC_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct capture - Struct capture
 *
 * @char: la lettre à comparer
 * @call_func: le pointeur sur fonction
 */
typedef struct capture
{
	char letter;
	void (*call_func)(va_list *args);
}
capt_t;
#endif
