#include "monty.h"

void push(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	add_dnodeint(stack);
}

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head
 * @n: n
 * Return: new head
 */

stack_t *add_dnodeint(stack_t **stack)
{
	stack_t *nhead;

	nhead = malloc(sizeof(**stack));
	if (nhead == NULL)
	{
		exit;
	}
	nhead->n = 1;
	nhead->next = (*stack);
	nhead->prev = NULL;

	if (*stack != NULL)
		(*stack)->prev = nhead;
	(*stack) = nhead;
}
