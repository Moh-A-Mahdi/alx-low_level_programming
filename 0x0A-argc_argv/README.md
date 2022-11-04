# C - argc, argv

Project done during **Full Stack Software Engineering studies** at **ALX**. It aims to learn more about:

* How to use arguments passed to your program.
* What are two prototypes of `main` that you know of, and in which case do you use one or the other.
* How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters.

## Files

All of the following files are scripts and programs written in C.

> * [main.h](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0A-argc_argv/main.h)
>
>> Declaring the functions.
------------------

> * [0-whatsmyname.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0A-argc_argv/0-whatsmyname.c)
>
>> A program that prints its name, followed by a new line.
>>>
>>> * _If you rename the program, it will print the new name, without having to compile it again_.
>>> * _You should not remove the path before the name of the program_.

------------------

> * [1-args.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0A-argc_argv/1-args.c)
>
>> A program that prints the number of arguments passed into it.
------------------

> * [2-args.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0A-argc_argv/2-args.c)
>
>> A program that prints all arguments it receives.
>>>
>>> * _All arguments will be printed, including the first one_.
>>> * _Only print one argument per line, ending with a new line_.

------------------

> * [3-mul.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0A-argc_argv/3-mul.c)
>
>> A program that multiplies two numbers, followed by a new line.
>>> _If the program does not receive two arguments_, _it print_ `Error`, _followed by a new line_, _and return_ `1`.
------------------

> * [4-add.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0A-argc_argv/4-add.c)
>
>> A program that adds positive numbers, followed by a new line
>>>
>>> * _If no number is passed to the program, will print_ `0`, _followed by a new line_.
>>> * _If one of the numbers contains symbols that are not digits, will print_ `Error`, _followed by a new line_, _and return_ `1`.

------------------

> * [100-change.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0A-argc_argv/100-change.c)
>
>> A program that prints the minimum number of coins to make change for an amount of money.
>>>
>>> * _Usage:_ `./change cents`.
>>> * _where_ `cents` _is the amount of cents you need to give back_.
>>> * _if the number of arguments passed to your program is not exactly_ `1`, _will print_ `Error`, _followed by a new line_, _and return_ `1`.
>>> * _If the number passed as the argument is negative_, _will print_ `0`, _followed by a new line_.
