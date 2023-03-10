# List of C Functions

This repository contains the following C functions:

| Filename | Description |
| -------- | ----------- |
| 0-isupper.c | Checks if a character is an uppercase letter |
| 0-memset.c | Fills memory with a constant byte |
| 0-strcat.c | Concatenates two strings |
| 1-isdigit.c | Checks if a character is a digit |
| 1-memcpy.c | Copies memory area from source to destination |
| 1-strncat.c | Concatenates two strings up to a given number of bytes |
| 2-strchr.c | Locates a character in a string |
| 2-strlen.c | Calculates the length of a string |
| 2-strncpy.c | Copies a string up to a given number of bytes |
| 3-strcmp.c | Compares two strings |
| 3-strspn.c | Gets the length of a prefix substring |
| 3-islower.c | Checks if a character is a lowercase letter |
| 3-puts.c | Writes a string to stdout |
| 4-isalpha.c | Checks if a character is an alphabetic letter |
| 4-strpbrk.c | Searches a string for any of a set of bytes |
| 5-strstr.c | Finds the first occurrence of a substring in a string |
| 6-abs.c | Computes the absolute value of an integer |
| 9-strcpy.c | Copies a string to a destination including the terminating null byte |
| 100-atoi.c | Converts a string to an integer |

Each function is contained in its own file with the corresponding filename.

Additionally, the repository contains the following helper function:

| Filename | Description |
| -------- | ----------- |
| _putchar.c | Writes a character to stdout |

To use these functions in your C program, you can include the corresponding header files and compile your program with the corresponding source files. For example:

```c
#include "holberton.h"

int main(void)
{
    char str1[] = "Hello";
    char str2[] = "World!";
    char dest[12];

    _strcat(dest, str1);
    _strcat(dest, " ");
    _strcat(dest, str2);

    _puts(dest);

    return (0);
}

