#include <stdio.h>
#include <unistd.h>

/**
  * Description: main - Prints the numbers from 0 to 9
  * Return: Always (Success)
  */

int main(void)
{
write(1, "0123456789\n",
sizeof("0123456789"));
return (0);
}
