# List of C Functions

This repository contains the following C functions:

| Functions name | Description |
| ------------ | ------------- |
| _isupper | Checks if a character is an uppercase letter |
| _memset | Fills memory with a constant byte |
| _strcat | Concatenates two strings |
| _isdigit | Checks if a character is a digit |
| _memcpy | Copies memory area from source to destination |
| _strncat | Concatenates two strings up to a given number of bytes |
| _strchr | Locates a character in a string |
| _strlen | Calculates the length of a string |
| _strncpy | Copies a string up to a given number of bytes |
| _strcmp | Compares two strings |
| _strspn | Gets the length of a prefix substring |
| _islower | Checks if a character is a lowercase letter |
| _puts | Writes a string to stdout |
| _isalpha | Checks if a character is an alphabetic letter |
| _strpbrk | Searches a string for any of a set of bytes |
| _strstr | Finds the first occurrence of a substring in a string |
| _abs.| Computes the absolute value of an integer |
| _strcpy | Copies a string to a destination including the terminating null byte |
| _atoi | Converts a string to an integer |

Each function is contained in its own file with the corresponding filename.

Additionally, the repository contains the following helper function:

| Function name | Description |
| -------- | ----------- |
| _putchar | Writes a character to stdout |

To use these functions in your C program, you can include the corresponding header files and compile your program with the corresponding source files. For example:

```c
#include "main.h"

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

