#include "main.h"
/**
 * _isalpha - est la fonction qui teste un caractère
 * @c: est le caractère à vérifier
 *
 * Return: 1 si c'est une lettre et 0 si c'est autre
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
