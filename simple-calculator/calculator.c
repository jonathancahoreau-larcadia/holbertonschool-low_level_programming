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
	int number_a = 0, number_b = 0;
	int result_add;

	do {
		printf("Simple Calculator\n");
		printf("%d) Add\n", add);
		printf("%d) Subtract\n", subtract);
		printf("%d) Multiply\n", multiply);
		printf("%d) Divide\n", divide);
		printf("%d) Quit\n", quit);
		printf("Choice: ");
		scanf("%d", &choice);

		if (choice == add)
		{
			printf("A: ");
			scanf("%d", &number_a);
			printf("B: ");
			scanf("%d", &number_b);

			result_add = number_a + number_b;
			printf("Result: %d\n", result_add);
		}

		if (choice != quit)
		{
			printf("Invalid choice\n");
			printf("Choice: ");
			scanf("%d", &choice);
		}

	} while (choice != quit);
	{
		printf("Bye!\n");
	}
return (0);
}
