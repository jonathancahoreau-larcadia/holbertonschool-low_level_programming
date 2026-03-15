#include "main.h"
/**
 * _print_rev_recursion - affiche les caracteres à l'envers
 * @s: pointeur sur un char
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
