#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: (O) if success
 */
int main(void)
{
	/*déclaration de variables*/
	int number = 122;
	int i = number;
	int reverse = 0;

	while (number)
	{
		reverse = reverse * 10 + (number % 10); /*"shift the digits to the left and then add a digit on the right*/
		number = number /10; /*remove the last digit of the number*/
	}
	if (reverse == i)
		printf("%d est un palindrome\n", i);
	else
		printf("%d n'est pas un palindrome\n", i);
return (0);
}