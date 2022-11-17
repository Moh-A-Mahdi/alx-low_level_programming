#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */

void print_alphabet(void)
{

    write(1, "abcdefghijklmnopqrstuvwxyz\n", 
    sizeof("abcdefghijklmnopqrstuvwxyz"));

}
