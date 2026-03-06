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
{
	int i, j, add;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
return (0);
}
