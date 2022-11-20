# C - Function pointers

Project done during **Full Stack Software Engineering studies** at **ALX**. It aims to learn **about:**

* What are function pointers and how to use them.
* What does a function pointer exactly hold.
* Where does a function pointer point to in the virtual memory.

## Files

All of the following files are scripts and programs written in C.

> * [function_pointers.h](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0F-function_pointers/function_pointers.h)
>
>> Declaring the functions.
------------------

> * [0-print_name.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0F-function_pointers/0-print_name.c)
>
>> A function that prints a name.
>>> _Prototype:_ `void print_name(char *name, void (*f)(char *));`.
------------------

> * [1-array_iterator.c](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0F-function_pointers/1-array_iterator.c)
>
>> A function that executes a function given as a parameter on each element of an array.
>>>
>>> * _Prototype:_ `void array_iterator(int *array, size_t size, void (*action)(int));`.
>>> * _where_ `size` _is the size of the array_.
>>> * `action` _is a pointer to the function_.

------------------

> * [](https://github.com/Moh-A-Mahdi/alx-low_level_programming/blob/master/0x0F-function_pointers/)
>
>> A function that searches for an integer.
>>>
>>> * _Prototype:_ `int int_index(int *array, int size, int (*cmp)(int));`.
>>> * _where_ `size` _is the number of elements in the array_ `array`.
>>> * `cmp` _is a pointer to the function to be used to compare values_.

------------------
>> _Work on progress_
![alt](https://geps.dev/progress/40)
