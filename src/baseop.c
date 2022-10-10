#include "brain.h"

void baseop(char *Line)
{
	int i = 0;
	char ops[6] = {'>', '<', '+', '-', '.', ','};
	int array[3000];
	int n = 0;
	int b = 0;
	while (array[n])
	{
		array[n] = 0;
		n++;
	}
	
	while(Line[i])
	{

		//switch case
		if (Line[i] == '>')
		{
			b = b+1;
		}
		else if (Line[i] == '<')
		{
			b = b-1;
		}
		else if (Line[i] == '+')
		{
			array[b] = 1 + array[b];
		}
		else if (Line[i] == '-')
		{
			array[b] = array[b] - 1;
		}
		else if (Line[i] == '.')
		{
			printf("Inside cell:%c \t Cell no: %i\n", array[b], b);
		}
		else
		{
			printf("wrong input\n");
		}
		i++;
	}
}
