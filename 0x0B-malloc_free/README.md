# C - malloc, free

Project done during **Full Stack Software Engineering studies** at **ALX**. It aims to learn more about:

* What is the difference between automatic and dynamic allocation.
* What is `malloc` and `free` and how to use them.
* Why and when use `malloc`.
* How to use `valgrind` to check for memory leak.

## Files

All of the following files are scripts and programs written in C.

> * [main.h](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0B-malloc_free/main.h)
>
>> Declaring the functions.
------------------

> * [0-create_array.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0B-malloc_free/0-create_array.c)
>
>> A function that creates an array of chars, and initializes it with a specific char.
>>>
>>> * _Prototype:_ `char *create_array(unsigned int size, char c);`.
>>> * _Returns_ `NULL` _if size_ = `0`.
>>> * _Returns a pointer to the array_, _or_ `NULL` _if it fails_.

------------------

> * [1-strdup.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0B-malloc_free/1-strdup.c)
>
>> A function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
>>>
>>> * _Prototype:_ `char *_strdup(char *str);`.
>>> * _The_ `_strdup()` _function returns a pointer to a new string which is a duplicate of the string_ `str`. _Memory for the new string is obtained with_ `malloc`, _and can be freed with_ `free`.
>>> * _Returns_ `NULL` _if_ `str` = `NULL`
>>> * _On success_, _the_ `_strdup` _function returns a pointer to the duplicated string_. _It returns_ `NULL` _if insufficient memory was available_.

------------------

> * [2-str_concat.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0B-malloc_free/2-str_concat.c)
>
>> A function that concatenates two strings.
>>>
>>> * _Prototype:_ `char *str_concat(char *s1, char *s2);`.
>>> * _The returned pointer point to a newly allocated space in memory which contains the contents of_ `s1`, _followed by the contents of_ `s2`, _and null terminated_.
>>> * _The function return_ `NULL` _on failure_.

------------------

> * [3-alloc_grid.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0B-malloc_free/3-alloc_grid.c)
>
>> A function that returns a pointer to a 2 dimensional array of integers.
>>>
>>> * _Prototype:_ `int **alloc_grid(int width, int height);`.
>>> * _The function should return_ `NULL` _on failure_.
>>> * _If_ `width` _or_ `height` _is_ `0` _or negative_, _return_ `NULL`.

------------------

> * [4-free_grid.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0B-malloc_free/4-free_grid.c)
>
>> A function that frees a 2 dimensional grid previously created by your [`alloc_grid`](./3-alloc_grid.c) function.
>>> _Prototype:_ `void free_grid(int **grid, int height);`.
------------------

> * [100-argstostr.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0B-malloc_free/100-argstostr.c)
>
>> A function that concatenates all the arguments of your program, followed by a `\n` in the new string.
>>>
>>> * _Prototype:_ `char *argstostr(int ac, char **av);`.
>>> * _Returns_ `NULL` _if_ `ac` == `0` _or_ `av` == `NULL`.
>>> * _Returns a pointer to a new string_, _or_ `NULL` _if it fails_.

------------------

> * [101-strtow.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0B-malloc_free/101-strtow.c)
>
>> A function that splits a string into words, Words are separated by spaces.
>>>
>>> * _Prototype:_ `char **strtow(char *str);`.
>>> * _The function returns a pointer to an array of strings (words)_.
>>> * _Returns_ `NULL` _if_ `str` == `NULL` _or_ `str` == `""`.
>>> * _If the function fails_, _it return_ `NULL`.
