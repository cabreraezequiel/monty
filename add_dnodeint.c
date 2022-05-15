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
	int i = 0, a = 0;

	if (value != NULL)
	{
		for (i = 0; value[i] != '\0'; i++)
		{
			if (isdigit(value[i]) != 0)
			{
				a = 1;
				break; }
		}
		if (a == 1)
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
}
