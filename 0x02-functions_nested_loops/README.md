# C - Functions, nested loops

Project done during **Full Stack Software Engineering studies** at **ALX**. It aims to learn **about:**

* Nested loops.
* Functions.
* Prototypes.
* Scope of variables.
* Header files.
* The `gcc` flags `-Wall` `-Werror` `-pedantic` `-Wextra` `-std=gnu89`.

## Files

All of the following files are scripts and programs written in C.

> * [main.h](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x02-functions_nested_loops/main.h)
>
>> Declaring the functions.
------------------

> * [0-putchar.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x02-functions_nested_loops/0-putchar.c)
>
>> A program that prints `_putchar`, followed by a new line.
------------------

> * [1-alphabet.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x02-functions_nested_loops/1-alphabet.c)
>
>> A function that prints the alphabet, in lowercase, followed by a new line.
>>> _Prototype:_ `void print_alphabet(void);`.
------------------

> * [2-print_alphabet_x10.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x02-functions_nested_loops/2-print_alphabet_x10.c)
>
>> A function that prints `10` times the alphabet, in lowercase, followed by a new line.
>>> _Prototype:_ `void print_alphabet_x10(void);`.
------------------

> * [3-islower.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x02-functions_nested_loops/3-islower.c)
>
>> A function that checks for lowercase character.
>>>
>>> * _Prototype:_ `int _islower(int c);`.
>>> * _Returns_ `1` _if_ `c` _is lowercase_.
>>> * _Returns_ `0` _otherwise_.

------------------

> * [4-isalpha.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x02-functions_nested_loops/4-isalpha.c)
>
>> A function that checks for alphabetic character.
>>>
>>> * _Prototype:_ `int _isalpha(int c);`.
>>> * _Returns_ `1` _if_ `c` _is a letter, lowercase or uppercase_.
>>> * _Returns_ `0` _otherwise_.

------------------

> * [5-sign.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x02-functions_nested_loops/5-sign.c)
>
>> A function that prints the sign of a number.
>>>
>>> * _Prototype:_ `int print_sign(int n);`.
>>> * _Returns_ `1` _and prints_ `+` _if_ `n` _is greater than zero_.
>>> * _Returns_ `0` _and prints_ `0` _if_ `n` _is zero_.
>>> * _Returns_ `-1` _and prints_ `-` _if `n`_is less than zero_.

------------------

> * [6-abs.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x02-functions_nested_loops/6-abs.c)
>
>> A function that computes the absolute value of an integer.
>>> _Prototype:_ `int _abs(int);`.
------------------

> * [7-print_last_digit.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x02-functions_nested_loops/7-print_last_digit.c)
>
>> A function that prints the last digit of a number.
>>>
>>> * _Prototype:_ `int print_last_digit(int);`.
>>> * _Returns the value of the last digit_.

------------------

> * [8-24_hours.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x02-functions_nested_loops/8-24_hours.c)
>
>> A function that prints every minute of the day of Jack Bauer, starting from `00:00` to `23:59`.
>>> _Prototype:_ `void jack_bauer(void);`.
------------------

> * [9-times_table.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x02-functions_nested_loops/9-times_table.c)
>
>> A function that prints the `9` times table, starting with `0`.
>>> _Prototype:_ `void times_table(void);`.
------------------

> * [10-add.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x02-functions_nested_loops/10-add.c)
>
>> A function that adds two integers and returns the result.
>>> _Prototype:_ `int add(int, int);`.
------------------

> * [11-print_to_98.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x02-functions_nested_loops/11-print_to_98.c)
>
>> A function that prints all natural numbers from n to 98, followed by a new line.
>>>
>>> * _Prototype:_ `void print_to_98(int n);`.
>>> * _Numbers printed in order_.
>>> * _The first printed number is the number that passed to the function_.
>>> * _The last printed number is_ `98`.
>>> * _Without using standard library_.

------------------

> * [100-times_table.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x02-functions_nested_loops/100-times_table.c)
>
>> A function that prints the `n` times table, starting with `0`.
>>>
>>> * _Prototype:_ `void print_times_table(int n);`.
>>> * _If `n` is greater than `15` or less than `0` the function will print nothing_.

 ------------------

> * [101-natural.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x02-functions_nested_loops/101-natural.c)
>
>> A program that computes and prints the sum of all the multiples of `3` or `5` below `1024` (excluded), followed by a new line.
>>> _Without using the standard library_.
------------------

> * [102-fibonacci.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x02-functions_nested_loops/102-fibonacci.c)
>
>> A program that prints the first `50 Fibonacci` numbers, starting with `1` and `2`, followed by a new line.
>>> _Without using the standard library_.
------------------

> * [103-fibonacci.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x02-functions_nested_loops/103-fibonacci.c)
>
>> A program that finds and prints the sum of the even-valued terms, followed by a new line.
>>> _Without using the standard library_.
------------------

> * [104-fibonacci.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x02-functions_nested_loops/104-fibonacci.c)
>
>> A program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
>>>
>>> * _Without using the standard library_.
>>> * _Without using_ `long long`, `malloc`, _pointers_, _arrays/tables_, _or structures_.
>>> * _Without hard code any Fibonacci number_ (_except for_ `1` _and_ `2`).