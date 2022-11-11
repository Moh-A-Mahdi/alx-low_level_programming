# C - More malloc, free

Project done during **Full Stack Software Engineering studies** at **ALX**. It aims to learn more about:

* How to use the exit function.
* What are the functions calloc and realloc from the standard library and how to use them.

## Files

All of the following files are scripts and programs written in C.

> * [main.h](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0C-more_malloc_free/main.h)
>
>> Declaring the functions.
------------------

> * [0-malloc_checked.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0C-more_malloc_free/0-malloc_checked.c)
>
>> A function that allocates memory using `malloc`.
>>>
>>> * _Returns a pointer to the allocated memory_.
>>> * _if malloc fails_, _the_ `malloc_checked` _function should cause normal process termination with a status value of_ `98`.

------------------

> * [1-string_nconcat.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0C-more_malloc_free/1-string_nconcat.c)
>
>> A function that concatenates two strings.
>>>
>>> * _Prototype:_ `char *string_nconcat(char *s1, char *s2, unsigned int n);`.
>>> * _The returned pointer point to a newly allocated space in memory, which contains_ `s1`, _followed by the first_ `n` _bytes of_ `s2`, _and null terminated_.
>>> * _If the function fails, it should return_ `NULL`.
>>> * _if_ `NULL` _is passed_, _will be treat it as an empty string_.

------------------

> * [2-calloc.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0C-more_malloc_free/2-calloc.c)
>
>> A function that allocates memory for an array, using `malloc`.
>>>
>>> * _Prototype:_ `void *_calloc(unsigned int nmemb, unsigned int size);`.
>>> * _The_ `_calloc` _function allocates memory for an array of_ `nmemb` _elements of_ `size` _bytes each and returns a pointer to the allocated memory_.
>>> * _The memory is set to zero_.
>>> * _If_ `nmemb` _or_ `size` is `0`, _then_ `_calloc` _returns_ `NULL`.
>>> * _If_ `malloc` _fails_, _then_ `_calloc` _returns_ `NULL`.

------------------

> * [3-array_range.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0C-more_malloc_free/3-array_range.c)
>
>> A function that creates an array of integers.
>>>
>>> * _Prototype:_ `int *array_range(int min, int max);`.
>>> * _If_ `min` > `max`, _returns_ `NULL`.
>>> * _If_ `malloc` _fails_, _returns_ `NULL`.

------------------

> * [100-realloc.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0C-more_malloc_free/100-realloc.c)
>
>> A function that reallocates a memory block using `malloc` and `free`.
>>>
>>> _Prototype:_ `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);`.
------------------

> * [101-mul.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0C-more_malloc_free/101-mul.c)
>
>> A program that multiplies two positive numbers.
