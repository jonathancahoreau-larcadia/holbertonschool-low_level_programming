#include "main.h"
#include <stdio.h>

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (*src != 0 && n > 0)
	{
		*p = *src;
		p++;
		src++;
		n--;
	}
return (dest);
}
