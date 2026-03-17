#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - fonction pour imprimer un nom
 * @name: pointeur vers un caractère
 * @f: pointeur vers une fonction prenant un char * en argument
 *
 * Return: rien
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
