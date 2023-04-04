#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: first node of the list
 *
 * Return: the address of the new node or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new, *current;

    current = *head;
    new = malloc(sizeof(listint_t));

    if (new == NULL)
    {
    return (NULL);
    }

    new->next = NULL;
    new->n = n;

    while (current->next != NULL)
    {
    current = current->next;
    }
    current->next = new;
    return (new);
}
