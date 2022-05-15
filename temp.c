#include "monty.h"
int value = 0;

stack_t *check(stack_t **stack, char *line)
{
	instruction_t inst[] = {
		{"push", push},
		{"pall", print_stack},
		{NULL, NULL}
	};
	int i = 0;
	char *buf;

	buf = strdup(line);
	buf = strtok(buf, " \t\n");
	for (i = 0; inst[i].opcode != NULL; i++)
	{
		if (strcmp(buf, inst[i].opcode) == 0)
		{
			if ((buf = (strtok(NULL, " \t\n"))) != NULL)
				value = atoi(buf);
			inst[i].f(stack, 0);
			return(*stack);

		}
	}
	return (NULL);
}
