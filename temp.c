#include "monty.h"
char *value;

stack_t *check(stack_t **stack, char *line, unsigned int line_number)
{
	instruction_t inst[] = {
		{"push", push},
		{"pall", print_stack},
		{NULL, NULL}
	};
	int i = 0, checker = 0;
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
			checker = 1;
			buf = strtok(NULL, " \t\n");
			if (buf != NULL)
				value = buf;
			inst[i].f(stack, line_number);
			return(*stack);

		}
	}
	if (checker == 0)
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, buf);
	}
	return (NULL);
}
