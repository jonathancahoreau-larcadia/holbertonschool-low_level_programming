#include <stdio.h>
#include "dog.h"
#include "main.h"
#include <stdlib.h>
/**
*_strlen - calcul la longeur d'une chaine
*@s: est une chaine de caractère
*
*Return: renvoie le nombre de boucles jusqu'au caractère de fin '\0'
*/

int _strlen(char *s)
{
	int i;

	i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
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
*dest = '\0';
return (sd);
}
/**
 * new_dog - est le nom de la fonction qui renvoie un type de chien
 * @name: est la chaine de caractere du nom
 * @age: est une valeur en float
 * @owner: est la chaine de caractere du propriétaire
 *
 * Return: (ndog) le pointeur vers nouveau chien ou NULL en cas d'échec
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	if (name == NULL || owner == NULL)
	return (NULL);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	return (NULL);

	ndog->name = malloc((_strlen(name) + 1) * sizeof(char));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	else
		ndog->name = _strcpy(ndog->name, name);

	(ndog->owner) = malloc((_strlen(owner) + 1) * sizeof(char));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	else
		_strcpy(ndog->owner, owner);

	ndog->age = age;
return (ndog);
}
