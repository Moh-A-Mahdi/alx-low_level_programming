# C - Recursion

Project done during **Full Stack Software Engineering studies** at **ALX**. It aims to learn more about

* What is recursion.
* How to implement recursion.
* In what situations you should implement recursion.
* In what situations you shouldn’t implement recursion.

## Files

All of the following files are scripts and programs written in C.

> * [main.h](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x08-recursion/main.h)
>
>> Declaring the functions.
------------------

> * [0-puts_recursion.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x08-recursion/0-puts_recursion.c)
>
>> A function that prints a string, followed by a new line.
>>>
>>> * _Prototype:_ `void _puts_recursion(char *s);`.
>>> * _Using_ [`int _putchar(char c);`](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c) _function_.

------------------

> * [1-print_rev_recursion.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x08-recursion/1-print_rev_recursion.c)
>
>> A function that prints a string in reverse.
>>>
>>> * _Prototype:_ `void _print_rev_recursion(char *s);`.
>>> * _Using_ [`int _putchar(char c);`](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c) _function_.

------------------

> * [2-strlen_recursion.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x08-recursion/2-strlen_recursion.c)
>
>> A function that returns the length of a string.
>>>
>>> _Prototype:_ `int _strlen_recursion(char *s);`.
------------------

> * [3-factorial.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x08-recursion/3-factorial.c)
>
>> A function that returns the factorial of a given number.
>>>
>>> * _Prototype:_ `int factorial(int n);`.
>>> * _If_ `n` _is lower than_ `0`, _the function  return_ `-1` _to indicate an error_.
>>> * _Factorial of_ `0` _is_ `1`.

------------------

> * [4-pow_recursion.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x08-recursion/4-pow_recursion.c)
>
>> A function that returns the value of x raised to the power of y.
>>>
>>> * _Prototype:_ `int _pow_recursion(int x, int y);`.
>>> * _If_ `y` _is lower than_ `0`, _the function  return_ `-1`.

------------------

> * [5-sqrt_recursion.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x08-recursion/5-sqrt_recursion.c)
>
>> A function that returns the natural square root of a number.
>>>
>>> * _Prototype:_ `int _sqrt_recursion(int n);`.
>>> * _If_ `n` _does not have a natural square root, the function return_ `-1`.

------------------

> * [6-is_prime_number.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x08-recursion/6-is_prime_number.c)
>
>> A function that returns `1` if the input integer is a [`prime number`](https://en.wikipedia.org/wiki/Prime_number), otherwise return `0`.
>>>
>>> _Prototype:_ `int is_prime_number(int n);`.
------------------

> * [100-is_palindrome.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x08-recursion/100-is_palindrome.c)
>
>> A function that returns `1` if a string is a `palindrome` and `0` if not.
>>>
>>> * _Prototype:_ `int is_palindrome(char *s);`.
>>> * _An empty string is a palindrome_.

------------------

> * [101-wildcmp.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x08-recursion/101-wildcmp.c)
>
>> A function that compares two strings and returns `1` if the strings can be considered identical, otherwise return `0`.
>>>
>>> * _Prototype:_ `int wildcmp(char *s1, char *s2);`.
>>> * `s2` _can contain the special character_ `*`.
>>> * _The special char_ `*` _can replace any string (including an empty string)_.
