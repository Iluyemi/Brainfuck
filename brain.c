#include<stdio.h>
#include <unistd.h>
#include <stdlib.hi>
#include "baseop.c"
int main(int argc, char **argv)
{
	char *Line;
	size_t n = 0;
	int i;
	FILE *program;
	if (argc != 2)
	{
		fprintf(stderr, "Wrong numbrr of argumrnts\n");
		exit(EXIT_FAILURE);
	}
	program = fopen(argv[1], "r");
	if (program == NULL)
	{
		fprintf(stderr, "File opening eror\n");
		exit(EXIT_FAILURE);
	}
	getline(&Line, &n, program);
	baseop(Line);


	
}
	
