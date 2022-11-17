#include "main.h"
#include <unistd.h>

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */

void print_alphabet_x10(void)
{
int count;

for (count = 0; count <= 9; count++)
{
write(1, "abcdefghijklmnopqrstuvwxyz\n",
sizeof("abcdefghijklmnopqrstuvwxyz"));
}

}
