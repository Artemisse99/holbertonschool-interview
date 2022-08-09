#include "lists.h"


/**
 * insert_node - Put the node in a position sorted
 * @head: Head of list
 * @number: Number to make the new node
 *
 * Return:  Pointer at the new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = number;
	new->next = NULL;

	
	if (!(*head) || (*head)->n >= new->n)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		listint_t *curr = *head;
		/* Get Position of the Next Bigger */
		while (curr->next != NULL && curr->next->n < new->n)
			curr = curr->next;

		/* Link the Next New with the Head */
		new->next = curr->next;
		/* Link the Current With the New Node  */
		curr->next = new;

		return (new);
	}

	return (NULL);
}