#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - point d'entree
 * @argc: le nombre d'arguments
 * @argv: chaque chaine de caracteres
 *
 * Return: (O) si succes
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int res = 0;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (num2 == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	op_func = get_op_func(argv[2]);
	res = op_func(num1, num2);

	printf("%d\n", res);

return (0);
}
