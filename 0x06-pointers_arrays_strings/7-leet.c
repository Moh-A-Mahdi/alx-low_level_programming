#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 * Return: A pointer to the encoded string.
 */

char *leet(char *s)
{
	int index;
	int tmp;
	int tmp_2;

	char leet[] = "oOlLeEaAtT";
	char rep[] = "0011334477";

	index = 0;
	while (s[index] != '\0')
	{
		tmp = 0;
		tmp_2 = 0;
		while (leet[tmp] != '\0')
		{
			if (s[index] == leet[tmp])
			{
				tmp_2 = tmp;
				s[index] = rep[tmp_2];
			}
			tmp++;
		}
		index++;
	}
	return (s);
}
