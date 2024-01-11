#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *h;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	mp->next = h;

	if (h != NULL)
		h->prev = tmp;

	*head = tmp;

	return (tmp);
}
