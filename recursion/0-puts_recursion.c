#include "main.h"
/**
 * _puts_recursion - affiche les caracteres
 * @s: pointeur sur un char
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}


}
