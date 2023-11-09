#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value to be assigned to the new node.
 *
 * Return: Address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = *head;

	if (*head != NULL)
		(*head)->prev = tmp;

	*head = tmp;

	return (tmp);
}
