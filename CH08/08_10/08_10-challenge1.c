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
	struct alpha *alphabet = (struct alpha *)malloc(sizeof(struct alpha) * SIZE); /* pointer to arrray */
	if (NULL == alphabet)
	{
		puts("Memory allocation error for 'alphabet'");
		exit(EXIT_FAILURE);
	}

	for (char i = 0; i < SIZE; i++)
	{
		alphabet[i].number = i;
		alphabet[i].letter = 'A' + i;
	}

	for (char i = 0; i < SIZE; i++)
	{
		printf("%d : %c\n", alphabet[i].number, alphabet[i].letter);
	}

	free(alphabet);

	return 0;
}
