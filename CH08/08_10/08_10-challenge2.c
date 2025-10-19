#include <stdio.h>
#include <stdlib.h>

struct alpha
{
	int number;
	char letter;
};

#define SIZE 26

int main()
{
	struct alpha *abc[SIZE]; /* array of structure pointers */

	for (char i = 0; i < SIZE; i++)
	{
		abc[i] = (struct alpha *)malloc(sizeof(struct alpha));
		if (NULL == abc[i])
		{
			printf("Memory allocation error for %d element\n", i);
			exit(EXIT_FAILURE);
		}

		abc[i]->number = i;
		abc[i]->letter = 'A' + i;
	}

	for (char i = 0; i < SIZE; i++)
	{
		printf("%d : %c\n", abc[i]->number, abc[i]->letter);
	}

	for (char i = 0; i < SIZE; i++)
	{
		free(abc[i]);
	}

	return 0;
}
