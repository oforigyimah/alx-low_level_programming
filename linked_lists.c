#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	char *name;
	struct node *link;
} node_t;

void count_of_nodes(node_t *head)
{
	int count = 0;

	if (head == NULL)
		printf("Linked List is empty");
	node_t *ptr = NULL;
	ptr = head;
	while (ptr)
	{
		count++;
		ptr = ptr->link;
	}
	printf("%d\n", count);
}

void print_data(node_t *head)
{
	int count = 0;

	if (!head)
		printf("Linked list is empty");
	node_t *ptr = head;

	while (ptr)
	{
		count++;
		printf("Name: %s, Data position : %d, Value : %d\n", ptr->name, count, ptr->data);
		ptr = ptr->link;
	}
	putchar('\n');
}

void add_at_end(node_t *head, int data, char *name)
{
	node_t *ptr, *temp;

	ptr = head;
	temp = (node_t *)malloc(sizeof(node_t));

	temp->data = data;
	temp->name = name;
	temp->link = NULL;
	
	while (ptr->link)
		ptr = ptr->link;
	ptr->link = temp;
}

node_t* add_beg(node_t *head, int data, char *name)
{
	node_t *ptr = malloc(sizeof(node_t));

	ptr->link = head;
	ptr->data = data;
	ptr->name = name;

	head = ptr;
	return (head);
}

void del_pos(node_t **head, int position)
{
    node_t *current = *head;
    node_t *previous = *head;

    if(!(*head))
	   printf("List is already empt!");
    else if (position == 1)
    {
	   *head = current->link;
	   free(current);
	   current = NULL;
    }
    else
    {
	   while (position != 1)
	   {
		  previous = current;
		  current = current->link;
		  position--;
	   }
	   previous->link = current->link;
	   free(current);
	   current = NULL;
    }
}

node_t* del_list(node_t *head)
{
    node_t *temp = malloc(sizeof(node_t));

    temp = head;
    while (temp != NULL)
    {
	   head = temp->link;
	   free(temp);
	   temp = head;
    }
    return (NULL);
}

node_t* reverse(node_t *head)
{
    node_t *prev = NULL;
    node_t *next = NULL;

    while (head)
    {
	   next = head->link;
	   head->link = prev;
	   prev = head;
	   head = next;
    }
    head = prev;
    return (head);
}

int main(void)
{
	node_t *head = NULL;
	head = (node_t *)malloc(sizeof(node_t));

	head->data = 45;
	head->name = "Joe";
	head->link = NULL;
	

	node_t *current = malloc(sizeof(node_t));

	current->data = 100;
	current->name = "Julia";
	current->link = NULL;
	head->link = current;

	current = malloc(sizeof(node_t));

	current->data = 67;
	current->name = "Daniel";
	current->link = NULL;
	head->link->link = current;

	//count_of_nodes(head);
	print_data(head);
	add_at_end(head, 6788, "Mane");
	print_data(head);
	head = add_beg(head, 76, "John");
	print_data(head);
	del_pos(&head, 3);
	print_data(head);
	head = reverse(head);
	print_data(head);
	printf("%d and %d and %d", head->data, head->link->data, head->link->link->data);
	head = del_list(head);
	print_data(head);


	return 0;
}
