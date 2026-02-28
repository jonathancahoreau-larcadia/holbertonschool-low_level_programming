#include "main.h"

/**
 * _islower - indique si un caractère est une lettre minuscule
 * @c: caractère à tester
 *
 * Return: 1 si minuscule, 0 pour les autres
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
