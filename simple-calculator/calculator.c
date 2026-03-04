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
	int result = 0;

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

			result = number_a + number_b;
			printf("Result: %d\n\n", result);
		}
		else if (choice == subtract)
		{
			printf("A: ");
			scanf("%d", &number_a);
			printf("B: ");
			scanf("%d", &number_b);

			result = number_a - number_b;
			printf("Result: %d\n\n", result);
		}

		else if (choice != quit && choice > 4)
		{
			printf("Invalid choice\n\n");

		}

	} while (choice != quit);
	{
		printf("Bye!\n");
	}
return (0);
}
