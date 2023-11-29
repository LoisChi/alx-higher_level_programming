#include "lists.h"

/**
 * insert_node - Entry point
 * @head: head of linked list inserted
 * @number: num
 * Return: new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *list = *head;

	if (new == NULL)
		return (NULL);
	new->n = number;
	new->next = NULL;
	if (*head == NULL || number < (*head)->n)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (list->next != NULL && list->next->n < number)
		list = list->next;
	new->next = list->next;
	list->next = new;
	return (new);
}
