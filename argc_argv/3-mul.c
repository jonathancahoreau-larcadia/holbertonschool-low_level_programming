#include <stdio.h>
#include <stdlib.h>

/**
 * main - affiche le produit de deux nombres
 * @argc: nombre d'arg
 * @argv: tableau d'arg
 *
 * Return: Always (0) (Success)
 */

int main(int argc, char *argv[])
{	int a, b, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	prod = a * b;

	printf("%d\n", prod);
return (0);
}
