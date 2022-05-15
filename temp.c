#include "monty.h"
char *value;

stack_t *check(stack_t **stack, char *line)
{
	instruction_t inst[] = {
		{"push", push},
		{"pall", print_stack},
		{NULL, NULL}
	};
	int i = 0;
	char *buf;

	value = NULL;
	if (line != NULL)
	{
	buf = strdup(line);
	buf = strtok(buf, " \t\n");
	for (i = 0; inst[i].opcode != NULL; i++)
	{
		if (strcmp(buf, inst[i].opcode) == 0)
		{
			buf = strtok(NULL, " \t\n");
			if (buf != NULL)
				value = buf;
			inst[i].f(stack, 0);
			return(*stack);

		}
	}
	}
	return (NULL);
}
