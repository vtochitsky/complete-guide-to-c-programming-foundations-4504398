#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int main()
{
	// variable declarations
	int done;
	int c;

	/* main program loop */
	done = FALSE;
	while (!done)
	{
		// prompt for input
		printf("Command:");

		// do
		// {
		c = getchar();
		// } while (c == '\n'); /* discarding newline character */

		// process input
		switch (c)
		{
			// if R is input, output "move right"
		case 'R':
			puts("move right");
			break;
			// if L is input, output "move left"
		case 'L':
			puts("move left");
			break;
			// if B is input, output "move back"
		case 'B':
			puts("move back");
			break;
			// if Q is input, break the loop
		case 'Q':
			puts("goodbye!");
			done = TRUE;
			break;
			// if H or ? is input, output valid commands
		case 'H':
		case '?':
			puts("You may go (R)igth, (L)eft, (B)ack\n"
					 "Or you can (Q)uit");
			break;
			// identify invalid input
		default:
			puts("I don't know that command");
		}

		while ((c = getchar()) != '\n')
		{
			/* Flashing input buffer by discarding characters; and processing whole characters for a command */
		}
	}

	return 0;
}
