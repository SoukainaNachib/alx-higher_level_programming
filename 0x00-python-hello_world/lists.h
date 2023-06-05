#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - Singly Linked List
 * @x: Integer
 * @next: Points To The Next Node
 *
 * Description: Singly Linked List Node Struct
 * for ALX project
 */
typedef struct listint_s
{
	int x;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int x);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif
