#include <stdio.h>
#include <stdlib.h>

#define SIZE 32

void create_file(const char *f)
{
	char *data = "Test data";

	puts("Create new file ...");
	FILE *file = fopen(f, "w");
	if (NULL == file)
	{
		puts("File creation error.");
		exit(EXIT_FAILURE);
	}

	puts("Write data to the file ...");
	fprintf(file, "%s", data);

	puts("Close the file ...");
	fclose(file);
}

void read_file(const char *f)
{
	char data[SIZE];

	FILE *file = fopen(f, "r");
	puts("Open file ...");
	if (NULL == file)
	{
		puts("File opening error.");
		exit(EXIT_FAILURE);
	}

	puts("Read data from the file ...");
	fgets(data, SIZE, file);

	printf("Data: %s\n", data);

	puts("Close the file ...");
	fclose(file);
}

void delete_file(const char *f)
{
	puts("Delete the file ...");
	int res = remove(f);
	if (0 == res)
		puts("File was successfully deleted");
	else
		puts("File deletion error");
}

int main()
{
	const char filename[] = "stuff.dat";

	create_file(filename);
	read_file(filename);
	delete_file(filename);

	return 0;
}
