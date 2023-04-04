#include "lists.h"

/**
 * add_nodeint - adds a new at the beginning of a listint_t list.
 * @head: pointer tp the first node
 * @n: data to assign
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *temp = malloc(sizeof(listint_t));

    if (temp == NULL)
	   return (NULL);

    temp->n = n;
    temp->next = *head;

    *head = temp;
    return (temp);
}
