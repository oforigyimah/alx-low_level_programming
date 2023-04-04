# Linked Lists in C

This repository contains a C implementation of singly linked lists. The `lists.h` header file defines a `listint_t` struct and the following functions:

- `size_t print_listint(const listint_t *h)` : prints all the elements of a `listint_t` list.
- `size_t print_listint_len(const listint_t *h)` : returns the number of elements in a `listint_t` list.
- `listint_t *add_nodeint(listint_t **head, const int n)` : adds a new node at the beginning of a `listint_t` list.
- `listint_t *add_nodeint_end(listint_t **head, const int n)` : adds a new node at the end of a `listint_t` list.
- `void free_listint(listint_t *head)` : frees a `listint_t` list.
- `void free_listint2(listint_t **head)` : frees a `listint_t` list and sets the head to NULL.
- `int pop_listint(listint_t **head)` : deletes the head node of a `listint_t` list.
- `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)` : returns the nth node of a `listint_t` list.
- `int sum_listint(listint_t *head)` : returns the sum of all the data (n) of a `listint_t` list.
- `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)` : inserts a new node at a given position.
- `int delete_nodeint_at_index(listint_t **head, unsigned int index)` : deletes the node at index of a `listint_t` list.
- `listint_t *reverse_listint(listint_t **head)` : reverses a `listint_t` list.
- `size_t print_listint_safe(const listint_t *head)` : prints all the elements of a `listint_t` list, avoiding infinite loops.
- `size_t free_listint_safe(listint_t **h)` : frees a `listint_t` list, avoiding infinite loops.
- `listint_t *find_listint_loop(listint_t *head)` : finds the loop in a `listint_t` list, if it exists.

## Usage

1. Clone the repository: `git clone https://github.com/oforigyimah/`
2. Include the `lists.h` header file in your C program: `#include "lists.h"`
3. Use the available functions to manipulate `listint_t` lists.

```c
#include "lists.h"

int main(void)
{
    listint_t *head = NULL;

    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);

    print_listint(head);

    free_listint(head);

    return (0);
}

