#include "monty.h"

/**
 * free_list - frees a list_t list
 * @head: head of list
 */

void free_stack(stack_t *head)
{
	stack_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
