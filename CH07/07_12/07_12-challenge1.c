#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 32

/* main program */
int main()
{
	// variable declaration
	char command[SIZE];

	while (1)
	{
		printf("Command: ");

		// fetch input
		fgets(command, SIZE, stdin);

		// remove newline
		int x = 0;
		while (command[x] != '\n')
		{
			x++;
		}
		command[x] = '\0';

		// convert to uppercase
		x = 0;
		while (command[x])
		{
			command[x] = toupper(command[x]);
			x++;
		}

		// output "Processing command 'cmd'"
		printf("Processing command '%s'\n", command);

		// break the loop on `QUIT`
		if (!strcmp(command, "QUIT"))
			break;
	}

	return 0;
}
