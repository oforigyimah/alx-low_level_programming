# File descriptors and permissions

`main.h` is a header file for a C program that provides three functions for reading, creating, and appending text files. This program uses standard C libraries such as `stddef.h`, `stdlib.h`, `sys/types.h`, `unistd.h`, and `fcntl.h`.

## Functions

### `ssize_t read_textfile(const char *filename, size_t letters)`

This function reads a text file specified by `filename` and returns the number of characters it read. The maximum number of characters to be read is specified by the `letters` parameter.

### `int create_file(const char *filename, char *text_content)`

This function creates a new file specified by `filename` and writes the text content specified by `text_content` to it. If the file already exists, the text content will overwrite the existing content.

### `int append_text_to_file(const char *filename, char *text_content)`

This function appends the text content specified by `text_content` to an existing file specified by `filename`. If the file does not exist, it will be created.

## Usage

To use these functions in your C program, include the `main.h` header file and link the program with the appropriate libraries. 

Example usage:

```c
#include "main.h"

int main(void)
{
    char *filename = "example.txt";
    char *text = "Hello, world!\n";

    create_file(filename, text);
    append_text_to_file(filename, "How are you?\n");
    read_textfile(filename, 20);

    return (0);
}



