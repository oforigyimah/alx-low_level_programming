#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints al the elements of a listint_list.
 * @h: head point to the listint list.
 *
 * Return: the number of the nodes
 */

size_t print_listint(const listint_t *h)
{
    size_t n = 0;
    const listint_t *temp;
    
    temp= malloc(sizeof(listint_t));
    temp = h;

    while (temp != NULL)
    {
	printf("%d\n", temp->n);
	n++;
	temp = temp->next;
    }
    return (n);
}
