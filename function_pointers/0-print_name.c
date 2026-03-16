#include "function_pointers.h"
/**
 * print_name - fonction pour imprimer nom
 * @name: un pointeur sur caractere
 * @f: un pointeur sur fonction ayant pour
 * argument un pointeur sur un caractere
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
