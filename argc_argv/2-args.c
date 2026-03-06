#include <stdio.h>

/**
 * main - affiche tous les arguments reçus
 * @argc: nombre d'arg
 * @argv: tableau d'arg
 *
 * Return: Always (0) (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

return (0);
}
