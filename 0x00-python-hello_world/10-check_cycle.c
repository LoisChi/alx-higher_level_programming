#include "lists.h"

/**
 * check_cycle - Entry point
 * @list: linked list
 * Return: 0 or 1
 */
int check_cycle(listint_t *list)
{
	listint_t *c = list;
	listint_t *s = list;

	if (list == NULL)
		return (0);

	while (c && s && s->next)
	{
		c = c->next;
		s = s->next->next;
		if (c == s)
		{
			return (1);
		}
	}
	return (0);
}
