#include "main.h"
/**
 * main - Entry point
 * Return: Always (0) (Success)
 */
int main(void)
{
	int i = 0;
	char aff[] = "_putchar";

	while (aff[i] != '\0')
	{
		_putchar(aff[i]);
		i = i + 1;
	}
	_putchar('\n');
return (0);
}
