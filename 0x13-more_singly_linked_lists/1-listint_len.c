#include "lists.h"

/**
 * listint_len - count the number of elements in a linked listint_t list.
 * @h: pointer to the head of the list struct
 *
 * Return: noumber of count;
 */

size_t listint_len(const listint_t *h)
{
    size_t n = 0;
    const listint_t *temp = malloc(sizeof(listint_t));

    temp = h;
    while (temp != NULL)
    {
    n++;
    temp = temp->next;
    }
    return (n);
}
