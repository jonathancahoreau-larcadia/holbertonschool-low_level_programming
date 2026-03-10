#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - se comporte comme calloc
 * @nmemb: le nombre d'éléments
 * @size: represente la valeur en octets d'un type
 *
 * Return: (ptc) la valeur en octet de l'adresse concernant les éléments
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptc = NULL;
	unsigned int i;


	if (nmemb == 0 || size == 0)
		return (NULL);

	ptc = malloc(nmemb * size);
	if (ptc == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
	ptc[i] = 0;
	i++;
	}
return (ptc);
}

