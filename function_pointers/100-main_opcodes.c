#include <stdio.h>
#include <stdlib.h>
/**
 * main - point d'entrée
 * @argc: un entier représentant le nombre d'arguments
 * @argv: tableau de caracteres d'un arguments
 *
 * Return: (0) si succes
 */
int main(int argc, char *argv[])
{
	int opcode = 0;
	typedef int (*ptr_adress)(int, char **);
	ptr_adress mem;
	unsigned char *bytes;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	opcode = atoi(argv[1]);

	if (opcode < 0)
	{
		printf("Error\n");
		exit(2);
	}

	mem = &main;
	bytes = (unsigned char *)mem;

	for (i = 0; i < opcode; i++)
	{
		printf("%02x ", bytes[i]);

	}
	printf("\n");
	return (0);
}
