#include "main.h"

/**
 * _strspn - get the length of the prefix substring
 * @s: the string to be searched
 * @accept:: the prefix to be a measured
 * Return: the number of bytes in s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{

	int i = 0;
	int j = 0;

	for (; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
			if (s[i] != accept[j])
				break;
	}
	return (i);
}
