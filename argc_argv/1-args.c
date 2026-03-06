#include <stdio.h>

/**
 * main - affiche le nombre d'arguments
 * @argc: nombre d'arg
 * @argv: tableau d'arg
 *
 * Return: Always (0) (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
return (0);
}
