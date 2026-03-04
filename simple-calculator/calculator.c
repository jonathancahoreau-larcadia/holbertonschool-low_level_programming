#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always (0) (Success)
*/

int main(void)
{
	int add = 1, subtract = 2, multiply = 3, divide = 4, quit = 0;
	int choice = 0;

	do {
		printf("Simple Calculator\n");
		printf("%d) Add\n", add);
		printf("%d) Subtract\n", subtract);
		printf("%d) Multiply\n", multiply);
		printf("%d) Divide\n", divide);
		printf("%d) Quit\n", quit);
		printf("Choice: ");
		scanf("%d", &choice);

		if (choice != 0)
		{
			printf("Invalid choice\n");
			printf("Choice: ");
			scanf("%d", &choice);
		}
	} while (choice != 0);
	{
		printf("Bye!\n");
	}


return (0);
}
