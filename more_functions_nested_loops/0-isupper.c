#include "main.h"
/**
 * _isupper - informe si la lettre est maj
 * @c: le caractère
 *
 * Return: 1 si maj et 0 si autre
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
