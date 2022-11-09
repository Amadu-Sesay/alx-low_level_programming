#include  "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
  *_strlen - count array
  *@s: array of element
  *Return: 1
  */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	/* count character of string*/
	while (s[i] != '\0')
	{
			i++;
	}
		return (i);
}

/**
  *str_concat- back a pointer to array
  *@s1: array 1
  *@s2: array 2
  *Return: Always an array dynamic
  */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	unsigned int i, j, size;
	/* if the array empty */
	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* count size total */
	size = (_strlen(s1) + _strlen(s2) + 1);
	/* malloc */
	dest = (char *) malloc(size * sizeof(char));
	if (dest == 0)
	{
	return (NULL);
	}

	/* concatenate  arrays */
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
	*(dest + i) = *(s1 + i);
	}
	for (j = 0; *(s2 + j) !=  '\0'; j++)
	{
		*(dest + i) = *(s2 + j);
		i++;
	}
	return (dest);
}
