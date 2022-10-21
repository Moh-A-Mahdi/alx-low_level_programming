# C - More functions, more nested loops

Project done during **Full Stack Software Engineering studies** at **ALX**. It aims to learn more about

* What are nested loops and how to use them.
* What is a function and how do you use functions.
* What is the difference between a declaration and a definition of a function.
* What is a prototype.
* Scope of variables.
* What are the `gcc` flags `-Wall` `-Werror` `-pedantic` `-Wextra` `-std=gnu89`.
* What are header files and how to to use them with `#include`.

## Files

All of the following files are scripts and programs written in C.

> * [main.h](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/main.h)
>
>> Declaring the functions.
------------------
>
> * [0-isupper.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/0-isupper.c)
>
>> A function that checks for uppercase character.
>>>
>>> * _Prototype:_ `int _isupper(int c);`.
>>> * _Returns_ `1` if `c` _is uppercase_.
>>> * _Returns_ `0` _otherwise_.

------------------

> * [1-isdigit.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/1-isdigit.c)
>
>> A function that checks for a digit (`0` through `9`).
>>>
>>> * _Prototype:_ `int _isdigit(int c);`.
>>> * _Returns_ `1` if `c` _is a digit_.
>>> * _Returns_ `0` _otherwise_.

------------------

> * [2-mul.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/2-mul.c)
>
>> A function that multiplies two integers.
>>> _Prototype:_ `int mul(int a, int b);`.
------------------

> * [3-print_numbers.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/3-print_numbers.c)
>
>> A function that prints the numbers, from `0` to `9`, followed by a new line.
>>>
>>> * _Prototype:_ `void print_numbers(void);`.
>>> * _Using_ `_putchar` _only twice_.

------------------

> * [4-print_most_numbers.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/4-print_most_numbers.c])
>
>> A function that prints the numbers, from `0` to `9` except `2` and `4`, followed by a new line.
>>>
>>> * _Prototype:_ `void print_most_numbers(void);`.
>>> * _Using_ `_putchar` _only twice_.

------------------

> * [5-more_numbers.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/5-more_numbers.c)
>
>> A function that prints `10` times the numbers, from `0` to `14`, followed by a new line.
>>>
>>> * _Prototype:_ `void more_numbers(void);`.
>>> * _Using_ `_putchar` _only three times_.

------------------

> * [6-print_line.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/6-print_line.c)
>
>> A function that draws a straight line in the terminal, followed by a new line.
>>>
>>> * _Prototype:_ `void print_line(int n);`.
>>> * _Only Using_ `_putchar` _function_.
>>> * `n` _is the number of times the character_ `_` _is printed_.
>>> * _If_ `n` _is_ `0` _or less_, _the function will only print a_ `\n`.

------------------

> * [7-print_diagonal.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/7-print_diagonal.c)
>
>> A function that draws a diagonal line on the terminal.
>>>
>>> * _Prototype:_ `void print_diagonal(int n);`.
>>> * _Only Using_ `_putchar` _function_.
>>> * `n` _is the number of times the character_ `\` _is printed_.
>>> * _If_ `n` _is_ `0` _or less_, _the function will only print a_ `\n`.

------------------

> * [8-print_square.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/8-print_square.c)
>
>> A function that prints a square on the terminal, followed by a new line.
>>>
>>> * _Prototype:_ `void print_square(int size);`.
>>> * _Only Using_ `_putchar` _function_.
>>> * `size` _is the size of the square_.
>>> * _If_ `size` _is_ `0` _or less_, _the function will only print a_ `\n`.
>>> * _The character_ `#` _print the square_.

------------------

> * [9-fizz_buzz.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/9-fizz_buzz.c)
>
>> A program that prints the numbers from `1` to `100`, followed by a new line. But for multiples of `3` print `Fizz` instead of the number and for the multiples of `5` print `Buzz`, For numbers which are multiples of both `3` and `5` print `FizzBuzz`.
>>> _Without using the standard library_.
------------------

> * [10-print_triangle.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/10-print_triangle.c)
>
>> A function that prints a triangle on the terminal, followed by a new line.
>>>
>>> * _Prototype:_ `void print_triangle(int size);`.
>>> * _Only Using_ `_putchar` _function_.
>>> * `size` _is the size of the triangle_.
>>> * _If_ `size` _is_ `0` _or less_, _the function will only print a_ `\n`.
>>> * _The character_ `#` _print the triangle_.

------------------

> * [100-prime_factor.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/100-prime_factor.c)
>
>> A program that finds and prints the largest prime factor of the number `612852475143`, followed by a new line.
>>> _Without using the standard library_.
------------------

> * [101-print_number.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/101-print_number.c)
>
>> A function that prints an integer.
>>>
>>> * _Prototype:_ `void print_number(int n);`.
>>> * _Only Using_ `_putchar` _function_.
>>> * _Without using `long`_.
>>> * _Without using arrays or pointers_.
>>> * _Without hard-code special values_.
