#include <stdio.h>
#include <unistd.h>


/**
 * Description: main - Prints the alphabet in lowercase.
 * Return: Always 0.
 */

int main(void)
{

write(2, "abcdefghijklmnopqrstuvwxyz\n",
sizeof("abcdefghijklmnopqrstuvwxyz"));

}
