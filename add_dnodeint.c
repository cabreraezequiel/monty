#include "monty.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head
 * @n: n
 * Return: new head
 */

void push(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *nhead;

	nhead = malloc(sizeof(stack_t));
	if (nhead == NULL)
	{
		printf("Malloc failed\n");
	}
	else
	{
	nhead->n = value;
	nhead->next = (*stack);
	nhead->prev = NULL;

	if (*stack != NULL)
		(*stack)->prev = nhead;
	(*stack) = nhead;
	}
}
