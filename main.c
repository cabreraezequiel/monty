#include "monty.h"

stack_t *stack = NULL;

int main(int argc, char **argv)
{
	FILE *fd;
	char line[256];

	if (argc < 2 || argc > 3)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE); }

	fd = fopen(argv[1], "r");
	if (!fd)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE); }

	while (fgets(line, sizeof(line), fd))
	{
		check(&stack, line); }

	fclose(fd);
	return (0);
}
