#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - fonction pour imprimer un nom
 * @name: pointeur vers un caractère
 * @f: pointeur vers une fonction prenant un char * en argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
