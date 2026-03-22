#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[] )
{
	int opcode = 0;
	int (*adress)(int, char**);
	unsigned char *bytes;
	int i = 0;

	adress = &main;
	bytes = (unsigned char*)adress;


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

	for (i = 0; i < opcode; i++)
	{
		printf("%02x ", bytes[i]);

	}
	printf("\n");
	return(0);
}
