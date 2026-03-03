#include "main.h"
#include <stdio.h>

/**
*_strcpy - copie la source à la destination
*@@dest: une chaine de caractere
*@src: une chaine de caractere
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

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}