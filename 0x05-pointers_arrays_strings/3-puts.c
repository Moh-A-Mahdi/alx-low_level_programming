#include <stdio.h>
#include "main.h"

/**
 * _puts - prints the string  
 * @str: the string to be printed
 */

void _puts(char *str)
{
	while (*str)
	{
		printf("%c",*str);
		*str++; 
	}
	
	printf("\n");
}
