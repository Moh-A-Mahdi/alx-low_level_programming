#include "main.h"
#include <unistd.h>

/**
 * main - Prints "_putchar" followed by a new line.
 * Return: Always 0.
 */

int main(void)
{

	write(1, "_putchar\n",sizeof("_putchar"));

	return (0);
}
