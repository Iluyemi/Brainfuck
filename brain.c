#include<stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	char Line[20];
	long n;
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
	
	fread(Line, sizeof(char), n, program);
	/*if (program = NULL)
        {
                fprintf(stderr, "File opening eror\n");
                exit(EXIT_FAILURE);
        }
	*/
	write(1, &Line, 1);

}
	
