#include "main.h"

/**
*rev_string - modifie la chaine de caractere à l'envers puis retour à la ligne
*@s: est une chaine de caractère
*
*/
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i = i - 1; i > j; i--)
	{


			temp = s[j];
			s[j] = s[i];
			s[i] = temp;
			j++;

	}
}
