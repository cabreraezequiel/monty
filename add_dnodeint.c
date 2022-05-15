#include "monty.h"

int digits_only(char *s)
{
	int i = 0, bol = 0;

	for (i = 0; s[i]; i++)
	{
		if (isdigit(s[i]) != 0)
		{
			bol = 1;
			break; }
	}

	if (bol != 0)
		return (0);

	return (1);
}

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head
 * @n: n
 * Return: new head
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *nhead;

	if (value == NULL || (digits_only(value) != 0))
	{
		fprintf(stderr, "L%i: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		nhead = malloc(sizeof(stack_t));
		if (nhead == NULL)
		{
			printf("Malloc failed\n");
		}
		else
		{
			nhead->n = atoi(value);
			nhead->next = (*stack);
			nhead->prev = NULL;

			if (*stack != NULL)
				(*stack)->prev = nhead;
			(*stack) = nhead;
		}
	}
}
