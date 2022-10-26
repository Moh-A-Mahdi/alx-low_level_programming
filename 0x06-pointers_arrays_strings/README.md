# C - More pointers, arrays and strings

Project done during **Full Stack Software Engineering studies** at **ALX**. It aims to learn more about

* What are pointers and how to use them.
* What are arrays and how to use them.
* What are the differences between pointers and arrays.
* How to use strings and how to manipulate them.
* Scope of variables.

## Files

All of the following files are scripts and programs written in C.

> * [main.h](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/main.h)
>
>> Declaring the functions.
------------------

> * [0-strcat.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/0-strcat.c)
>
>> A function that concatenates two strings.
>>>
>>> * _Prototype:_ `char *_strcat(char *dest, char *src);`.
>>> * _This function appends the_ `src` _string to the_ `dest` _string_, _overwriting the terminating null byte_ (\0) _at the end of_ `dest`, _and then adds a terminating null byte_.
>>> * _Returns a pointer to the resulting string dest_.

------------------

> * [1-strncat.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/1-strncat.c)
>
>> A function that concatenates two strings.
>>>
>>> * _Prototype:_ `char *_strncat(char *dest, char *src, int n);`.
>>> * _The_ `_strncat` _function is similar to the_ [`0-strcat.c`](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/0-strcat.c) _function_, _except that it will use at most_ `n` _bytes from_ `src`.
>>> * `src` _does not need to be null-terminated if it contains_ `n` _or more bytes_.
>>> * _Return a pointer to the resulting string_ `dest`.

------------------

> * [2-strncpy.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/2-strncpy.c)
>
>> A function that copies a string.
>>>
>>> * _Prototype:_ `char *_strncpy(char *dest, char *src, int n);`.
>>> * _The Function work exactly like_ `strncpy`.

------------------

> * [3-strcmp.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/3-strcmp.c)
>
>> A function that compares two strings.
>>>
>>> * _Prototype:_ `int _strcmp(char *s1, char *s2);`.
>>> * _The Function work exactly like_ `strcmp`.

------------------

> * [4-rev_array.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/4-rev_array.c)
>
>> A function that reverses the content of an array of integers.
>>>
>>> * _Prototype:_ `void reverse_array(int *a, int n);`.
>>> * _Where_ `n` _is the number of elements of the array_.

------------------

> * [5-string_toupper.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/5-string_toupper.c)
>
>> A function that changes all lowercase letters of a string to uppercase.
>>> _Prototype:_ `char *string_toupper(char *);`.

------------------

> * [6-cap_string.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/6-cap_string.c)
>
>> A function that capitalizes all words of a string.
>>> _Prototype:_ `char *cap_string(char *);`.
------------------

> * [7-leet.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/7-leet.c)
>
>> A function that encodes a string into `1337`.;
>>>
>>> * _Prototype:_ `char *leet(char *);`.
>>> * _Letters_ `a` & `A` _replaced by_ `4`.
>>> * _Letters_ `e` & `E` _replaced by_ `3`.
>>> * _Letters_ `o` & `O` _replaced by_ `0`.
>>> * _Letters_ `t` & `T` _replaced by_ `7`.
>>> * _Letters_ `l` & `L` _replaced by_ `1`.
>>> * _Only using one_ `if` _and two loops_.
>>> * _Without using_ `switch` _or any ternary operation_.

------------------

> * [100-rot13.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/100-rot13.c)
>
>> A function that encodes a string using [`rot13`](https://en.wikipedia.org/wiki/ROT13).
>>>
>>> * _Prototype:_ `char *rot13(char *);`.
>>> * _Only using one_ `if` _and two loops_.
>>> * _Without using_ `switch` _or any ternary operation_.

------------------

> * [101-print_number.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/101-print_number.c)
>
>> A function that prints an integer.
>>>
>>> * _Prototype:_ `void print_number(int n);`.
>>> * _Only using_ [`int _putchar(char c);`](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c) _function_.
>>> * _Without using_ `long`, _arrays or pointers or hard-code special values_.

------------------

> * [102-magic.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/102-magic.c)
>
>> Editing this [`code`](https://github.com/holbertonschool/make_magic_happen/blob/master/magic.c) so the Program prints `a[2] = 98`, followed by a new line.
>>>
>>> * _Without using the variable_ `a` _in a new line of code_.
>>> * _Without modifying the variable_ `p`.
>>> * _Only writing one statement_.
>>> * _Without using `,`.
>>> * _Without removing anything from the initial code (not even the comments)_.
>>> * _Without using the standard library_.

------------------

> * [103-infinite_add.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/103-infinite_add.c)
>
>> A function that adds two numbers.
>>>
>>> * _Prototype:_ `char *infinite_add(char *n1, char *n2, char *r, int size_r);`.
>>> * _Where_ `n1` _and_ `n2` _are the two numbers_.
>>> * `r` _is the buffer that the function will use to store the result_.
>>> * `size_r` _is the buffer size_.
>>> * _The function returns a pointer to the result_.
>>> * _Assume that you will always get positive numbers_, _or_ `0`.
>>> * _assume that there will be only digits in the strings_ `n1` _and_ `n2`.
>>> * `n1` _and_ `n2` _will never be empty_.
>>> * _If the result can not be stored in_ `r` _the function return_ `0`.

------------------

> * [](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/)
>
>> A function that prints a buffer followed by a new line.
>>>
>>> * _Prototype:_ `void print_buffer(char *b, int size);`.
>>> * _The function print the content of_ `size` _bytes of the buffer pointed by_ `b`.
>>> * _The output print 10 bytes per line_.
>>> * _Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with_ `0`.
>>> * _Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space_.
>>> * _Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print_ `.` .
>>> * _If_ `size` _is_ `0` _or less_, _the output is a new line only_.

------------------
