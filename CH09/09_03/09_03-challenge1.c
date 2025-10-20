#include <stdio.h>
#include <stdlib.h>

int main()
{
	const char filename[] = "hello.txt";
	char str_buf[32];

	/* open file to write data in */
	FILE *file = fopen(filename, "w");
	if (NULL == file)
	{
		printf("File '%s' creation error.\n", filename);
		exit(EXIT_FAILURE);
	}

	printf("Enter your name:");

	fgets(str_buf, sizeof str_buf, stdin);

	char *ch = str_buf;
	while (*ch != '\n')
	{
		ch++;
	}
	*ch = '\0';

	fprintf(file, "%s has written to this file.", str_buf);

	fclose(file);

	/* open file to read data out */

	file = fopen(filename, "r");
	if (NULL == file)
	{
		printf("File '%s' openning error.\n", filename);
		exit(EXIT_FAILURE);
	}

	fgets(str_buf, sizeof str_buf, file);

	fclose(file);

	puts(str_buf);

	return 0;
}
