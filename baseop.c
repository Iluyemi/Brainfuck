#include <stdio.h>

void baseop(char *Line)
{
	int i;
	char ops[6] = {'>', '<', '+', '-', '.', ','};
	while(Line[i])
	{

		//switch case
		switch(Line[i])
		case '>':
			array[i+1];
			break;
		case '<':
			array[i-1];
			break;
		case '+':
			1 + array[i];
			break;
		case '-':
			array[i] - 1;
			break;
		case '.':
			printf("Inside cell:%c \t Cell no: %i\n", array[i], i);
			break;
		default:
			printf("wrong input"\n);
		i++;
	}
}
