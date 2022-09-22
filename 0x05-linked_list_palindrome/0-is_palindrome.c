#include "lists.h"

/**
 * is_palindrome - Verify if a linked list is palindrome
 * @head: (listint_t **) Head of the node
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	int length_all = length_linked(*head);
	int length_half = (length_all / 2), step = 0;
	listint_t *left = *head, *right = NULL;
	size_t k = 0, j = 1;

	if (!length_all)
		return (1);

	for (; step < length_half; ++step)
	{
		right = *head;

		k = (length_all - step);
		/* Get the node of the right */
		for (j = 1; (j < k) && (right->next); ++j)
			right = right->next;

		if (left->n != right->n)
			return (0);

		left = left->next;
	}

	return (1);
}

/**
 * length_linked - Look amount of nodes
 * @head: Copy of the Head node
 *
 * Return: Length of the linked list
 */
int length_linked(listint_t *head)
{
	int i = 0;

	for (; head != NULL; ++i, (head = head->next))
		;

	return (i);
}
