#include "main.h"

/**
*_strcpy - copie la source à la destination
*@dest: une chaine de caractere
*@src: une chaine de caractere
*
*Return: renvoie la destination
*/
char *_strcpy(char *dest, char *src)
{
	char *sd = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
return (sd);
}
