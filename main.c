#include "monty.h"

int main(int argc, char **argv)
{
	stack_t **head = NULL;
	FILE *fd;
	char line[256];

	if (argc < 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE); }

	fd = fopen(argv[1], "r");
	if (!fd)
	{
		fprintf(stderr, "Error: Can't open this file %s\n", argv[1]);
		exit(EXIT_FAILURE); }

	while (fgets(line, sizeof(line), fd))
	{
		check(head, line); }

	fclose(fd);
	return (0);
}
