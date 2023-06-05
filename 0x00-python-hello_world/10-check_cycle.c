#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Prints All Elements Of a Listint_t List
 * @h: Pointer To Head Of List
 * Return: Num Of Nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	unsigned int n;
	/* Num of Nodes */
	current = h;
	n = 0;
	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		n++;
	}
	return (n);
}

/**
 * add_nodeint - Adds A New Node At The Beginning Of A Listint_t List
 * @head: Pointer To a Pointer Of The Start Of The List
 * @n: Int To Be Included In Node
 * Return: Address Of The New Element Or NULL if it Fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

/**
 * free_listint - Frees a listint_t List
 * @head: Pointer To List To Be Freed
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
