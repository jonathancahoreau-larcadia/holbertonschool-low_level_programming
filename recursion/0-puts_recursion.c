#include "main.h"
/**
 * _puts_recursion - affiche les caracteres
 * @s: pointeur sur un char
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\0');
	_putchar('\n');
}
