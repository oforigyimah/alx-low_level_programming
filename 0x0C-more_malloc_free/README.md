| Function | Description |
| --- | --- |
| `void *malloc_checked(unsigned int b);` | Allocates memory dynamically using `malloc()` and checks if the allocation was successful. If the allocation fails, the program terminates with an error message. |
| `char *string_nconcat(char *s1, char *s2, unsigned int n);` | Concatenates two strings `s1` and `s2`, up to `n` bytes from `s2`. If `s1` or `s2` is `NULL`, an empty string is used instead. The result is a newly allocated string. |
| `void *_calloc(unsigned int nmemb, unsigned int size);` | Allocates memory for an array of `nmemb` elements of size `size` each, using `calloc()`. If the allocation fails, the program terminates with an error message. The memory is initialized to zero. |
| `int *array_range(int min, int max);` | Creates an array of integers containing values from `min` to `max`, inclusive. If `min` is greater than `max`, or if the allocation fails, the function returns `NULL`. |

