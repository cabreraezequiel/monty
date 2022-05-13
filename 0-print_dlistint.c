#include "monty.h"

/**
 * print_stack - prints all the elements of a stack
 * @stack: stack
 * @line_lumber: line with the instruction
 */

void print_stack(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	while (*stack != NULL)
	{
		printf("%d\n", (*stack)->n);
		(*stack) = (*stack)->next;
	}
}
