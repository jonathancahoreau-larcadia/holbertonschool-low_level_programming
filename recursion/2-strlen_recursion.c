#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - "nombre de caracteres par récursivité"
 * @s: un pointeur sur un caractere
 *
 * Return: la longueur de la chaine
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

return (1 + _strlen_recursion(s + 1));
}
