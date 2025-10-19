#include <stdio.h>
#include <stdlib.h>
// #include <string.h>

/* if entered string is longer than buffer size than part which is still in stdin affects next execution*/

// write the get_input() function here
char *get_input(size_t size)
{
	char *p = (char *)malloc(sizeof(char) * size);
	if (NULL == p)
	{
		fprintf(stderr, "Memory was not allocated\n");
		exit(EXIT_FAILURE);
	}

	fgets(p, size, stdin);

	size_t i = 0;
	while (*(p + i) != '\n' && i < (size - 1))
		i++;
	*(p + i) = '\0';

	return p;
}

int main()
{
	char *your_name, *your_city;

	printf("Your name: ");
	your_name = get_input(10);
	printf("Your city: ");
	your_city = get_input(10);

	printf("%s lives in %s.\n", your_name, your_city);

	free(your_name);
	free(your_city);

	return 0;
}
