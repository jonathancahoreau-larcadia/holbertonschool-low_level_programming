#include <stdio.h>
/**
 *
 *
*/

int main(void)
{
	int a =1 , b = 2, c = 3, d = 4, e = 0;
	int choice = 0;

	printf("Simple Calculator\n");
	printf("%d) Add\n", a);
	printf("%d) Subtract\n", b);
	printf("%d) Multiply\n", c);
	printf("%d) Divide\n", d);
	printf("%d) Quit\n", e);

	printf("Choice: ");
	scanf("%d", &choice);


	while (choice > 4)
	{
		printf("Invalid choice\n");
		printf("Choice: ");
		scanf("%d", &choice);
		if (choice == 0)
		{
			printf("Bye!\n");
			return (0);
		}
		}

return (0);
}