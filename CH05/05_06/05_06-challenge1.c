#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll(void);

int main()
{
	int dice1, dice2, dice3;

	/* seed the randomizer */
	srand((unsigned)time(NULL));

	puts("Roll them bones!");

	dice1 = roll();

	dice2 = roll();

	dice3 = roll();

	printf("You rolled %d - %d - %d\n", dice1, dice2, dice3);

	return (0);
}

int roll(void)
{
	return (rand() % 6 + 1);
}
