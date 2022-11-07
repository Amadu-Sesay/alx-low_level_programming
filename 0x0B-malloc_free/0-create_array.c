#include "main.h"
#include <stdlib.h>
/**
  *create_array- create an array of char and initialize it with a char
  *@size : the size of the array
  *@c: initialized character
  * Return: pointer
  */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;


	if (size == 0)
	{
		return (NULL);
	}


	/* define value malloc */
	buffer = (char *) malloc(size * sizeof(c));
	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		position = 0;
	while (position < size)
	{
		*(buffer + position) = c;
	position++;
	}
	return (buffer);
	}
}
