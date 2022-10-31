# C - Even more pointers, arrays and strings

![Alt](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/218/58fe6b229144b7fe5ebe88afe9ff5cabe2dd0863e1e79b2d02b4103c30b465dd.jpg "meme ^_^")

Project done during **Full Stack Software Engineering studies** at **ALX**. It aims to learn more about

* What are pointers to pointers and how to use them.
* What are multidimensional arrays and how to use them.
* What are the most common C standard library functions to manipulate strings.

## Files

All of the following files are scripts and programs written in C.

> * [main.h](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/main.h)
>
>> Declaring the functions.
------------------

> * [0-memset.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/0-memset.c)
>
>> A function that fills memory with a constant byte.
>>>
>>> * _Prototype:_ `char *_memset(char *s, char b, unsigned int n);`.
>>> * _The_ `_memset()` _function fills the first_ `n` _bytes of the memory area pointed to by_ `s` _with the constant byte_ `b`.
>>> * _Returns a pointer to the memory area_ `s`.

------------------

> * [1-memcpy.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/1-memcpy.c)
>
>> A function that copies memory area.
>>>
>>> * _Prototype:_ `char *_memcpy(char *dest, char *src, unsigned int n);`.
>>> * _The_ `_memcpy()` _function copies_ `n` _bytes from memory area_ `src` _to memory area_ `dest`.
>>> * _Returns a pointer to_ `dest`.

------------------

> * [2-strchr.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/2-strchr.c)
>
>> A function that locates a character in a string.
>>>
>>> * _Prototype:_ `char *_strchr(char *s, char c);`.
>>> * _Returns a pointer to the first occurrence of the character_ `c` _in the string_ `s`, _or_ `NULL` _if the character is not found_.

------------------

> * [3-strspn.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/3-strspn.c)
>
>> A function that gets the length of a prefix substring.
>>>
>>> * _Prototype:_ `unsigned int _strspn(char *s, char *accept);`.
>>> * _Returns the number of bytes in the initial segment of_ `s` _which consist only of bytes from_ `accept`.

------------------

> * [4-strpbrk.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/4-strpbrk.c)
>
>> A function that searches a string for any of a set of bytes.
>>>
>>> * _Prototype:_ `char *_strpbrk(char *s, char *accept);`.
>>> * _The_ `_strpbrk()` _function locates the first occurrence in the string s of any of the bytes in the string_ `accept`.
>>> * _Returns a pointer to the byte in_ `s` _that matches one of the bytes in_ `accept`, _or_ `NULL` _if no such byte is found_.

------------------

> * [5-strstr.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/5-strstr.c)
>
>> A function that locates a substring.
>>>
>>> * _Prototype:_ `char *_strstr(char *haystack, char *needle);`.
>>> * _The_ `_strstr()` _function finds the first occurrence of the substring_ `needle` _in the string_ `haystack`.
>>> * _Returns a pointer to the beginning of the located substring_, _or_ `NULL` _if the substring is not found_.

------------------

> * [7-print_chessboard.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/7-print_chessboard.c)
>
>> A function that prints the chessboard.
>>> _Prototype:_ `void print_chessboard(char (*a)[8]);`.
------------------

> * [8-print_diagsums.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/8-print_diagsums.c)
>
>> A function that prints the sum of the two diagonals of a square matrix of integers.
>>> _Prototype:_ `void print_diagsums(int *a, int size);`.
------------------

> * [100-set_string.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/100-set_string.c)
>
>> A function that sets the value of a pointer to a char.
>>> _Prototype:_ `void set_string(char **s, char *to);`.
------------------

> * [101-crackme_password](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/101-crackme_password)
>
>> A file that contains the password for the [`crackme2`](https://github.com/holbertonschool/0x06.c) executable.
>>>
>>> * _The file contain the exact password, no new line, no extra space_.
>>> * _You may need to install the_ `openssl` _library to run the_ [`crackme2`](https://github.com/holbertonschool/0x06.c) _program_: `sudo apt install libssl-dev`.
