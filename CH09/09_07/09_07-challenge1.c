#include <stdio.h>

int main()
{
	const char filename[] = "presidents.dat";

	struct person
	{
		char name[32];
		int inauguration;
		int age;
	} president;

	int x;
	FILE *fp;

	/* open the file */
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("Unable to open %s\n", filename);
		return (1);
	}

	/*Determine number of records */
	fseek(fp, 0, SEEK_END);
	long filesize = ftell(fp);
	int count = filesize / sizeof(struct person);

	/* read records from back to front */
	x = 0;
	while (x > -count)
	{
		x--;

		/* Set the file position indicator */
		fseek(fp, sizeof(struct person) * x, SEEK_END);

		/* fetch the record */
		fread(&president, sizeof(struct person), 1, fp);

		/* print the result */
		printf("President %s was %d years old when inaugurated in %d\n",
					 president.name,
					 president.age,
					 president.inauguration);
	}

	/* clean-up */
	fclose(fp);
	return (0);
}
