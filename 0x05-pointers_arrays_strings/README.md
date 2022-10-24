# C - Pointers, arrays and strings

Project done during **Full Stack Software Engineering studies** at **ALX**. It aims to learn more about

* What are pointers and how to use them.
* What are arrays and how to use them.
* What are the differences between pointers and arrays.
* How to use strings and how to manipulate them.
* Scope of variables.

## Files

All of the following files are scripts and programs written in C.

> * [main.h](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/main.h)
>
>> Declaring the functions.
------------------

> * [0-reset_to_98.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/0-reset_to_98.c)
>
>> A function that takes a pointer to an `int` as parameter and updates the value it points to `98`.
>>> _Prototype:_ `void reset_to_98(int *n);`.
------------------

> * [1-swap.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/1-swap.c)
>
>> A function that swaps the values of two integers.
>>> _Prototype:_ `void swap_int(int *a, int *b);`.
------------------

> * [2-strlen.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/2-strlen.c)
>
>> A function that returns the length of a string.
>>> _Prototype:_ `int _strlen(char *s);`.
------------------

> * [3-puts.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/3-puts.c)
>
>> A function that prints a string, followed by a new line, to `stdout`.
>>>
>>> * _Prototype:_`void _puts(char *str);`.
>>> * _Using_ [`int _putchar(char c);`](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c) _function_.

------------------

> * [4-print_rev.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/4-print_rev.c)
>
>> A function that prints a string, in reverse, followed by a new line.
>>>
>>> * _Prototype:_ `void print_rev(char *s);`.
>>> * _Using_ [`int _putchar(char c);`](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c) _function_.

------------------

> * [5-rev_string.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/5-rev_string.c)
>
>> A function that reverses a string.
>>> _Prototype:_ `void rev_string(char *s);`.
------------------

> * [6-puts2.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/6-puts2.c)
>
>> A function that prints every other character of a string, starting with the first character, followed by a new line.
>>>
>>> * _Prototype:_ `void rev_string(char *s);`.
>>> * _Using_ [`int _putchar(char c);`](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c) _function_.

------------------

> * [7-puts_half.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/7-puts_half.c)
>
>> A function that prints half of a string, followed by a new line.
>>>
>>> * _Prototype:_ `void puts_half(char *str);`.
>>> * _Using_ [`int _putchar(char c);`](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c) _function_.
>>> * _The function prints the second half of the string_.
>>> * _If the number of characters is odd, the function prints the last_ `n` _characters of the string_, _where_ `n = (length_of_the_string - 1) / 2`.

------------------

> * [8-print_array.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/8-print_array.c)
>
>> A function that prints `n` elements of an array of integers, followed by a new line.
>>>
>>> * _Prototype:_ `void print_array(int *a, int n);`.
>>> * _Where_ `n` _is the number of elements of the array to be printed_.
>>> * _The numbers are displayed in the same order as they are stored in the array_.

------------------

> * [9-strcpy.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/9-strcpy.c)
>
>> A function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.
>>>
>>> * _Prototype:_ `char *_strcpy(char *dest, char *src);`.
>>> * _Return value: the pointer to_ `dest`.

------------------

> * [100-atoi.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/100-atoi.c)
>
>> A function that convert a string to an integer.
>>>
>>> * _Prototype:_ `int _atoi(char *s);`.
>>> * _The number in the string can be preceded by an infinite number of characters_.
>>> * _Taking into account all the_ `-` _and_ `+` _signs before the number_.
>>> * _If there are no numbers in the string, the function return_ `0`.
>>> * _Without using `long`, variables of `type array`.
>>> * _Without hard-code special values_.
>>>* _used the_ `-fsanitize=signed-integer-overflow`, `gcc` _flag to compile_.

------------------

> * [101-keygen.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/101-keygen.c)
>
>> A program that generates random valid passwords for the program [`101-crackme`](https://github.com/holbertonschool/0x04.c).
------------------
