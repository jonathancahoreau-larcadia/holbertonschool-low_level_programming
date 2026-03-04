#include "main.h"
#include <stdio.h>
/**
*_atoi - transforme une chaine de caractere en integer
*@s: un caractère
*
*Return: renvoie un int = result * sign
*/
int _atoi(char *s)
{
	int i = 0;
	unsigned long result = 0;
	int sign = 1;
	int find = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			find = 1;
		}
		else if (find == 1)
		{
			break;
		}
		i++;
	}
	return (result * sign);
}
