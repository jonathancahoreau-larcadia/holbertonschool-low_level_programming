#include <stdio.h>
#include <stdlib.h>

/**
 * main - affiche la somme de deux nombres considérés comme des arguments
 * @argc: nombre d'arg
 * @argv: tableau d'arg
 *
 * Return: Always (0) (Success)
 */

int main(int argc, char *argv[])
{	int a, b, add;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	add = a + b;

	printf("%d\n", add);
return (0);
}
