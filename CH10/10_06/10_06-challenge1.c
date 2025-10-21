#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}

int main()
{
	const int rows = 10;
	const int cols = 5;
	int r, c;
	int *grid = NULL;
	int i;

	// seed the randomizer
	srand((unsigned)time(NULL));

	// allocate storage
	grid = (int *)malloc(sizeof(int) * rows * cols);
	if (NULL == grid)
	{
		puts("Memory allocation error");
		exit(EXIT_FAILURE);
	}

	// populate the grid with random values, 0 through 99
	for (i = 0; i < cols * rows; i++)
	{
		grid[i] = rand() % 100;
	}

	// quicksort the grid
	qsort(grid, cols * rows, sizeof(int), compare);

	// output the grid
	/*
	for (r = 0; r < rows; r++)
	{
		for (c = 0; c < cols; c++)
			printf("%2d ", grid[r * cols + c]);
		puts("");
	}
	*/

	/*
	for (r = 0; r < rows; r++)
	{
		for (c = 0; c < cols; c++)
			printf("%2d ", grid[r + c * rows]);
		puts("");
	}
	*/

	// pointer notation
	for (r = 0; r < rows; r++)
	{
		for (c = 0; c < cols; c++)
			printf("%2d ", *(grid + r + c * rows));
		puts("");
	}

	free(grid);

	return 0;
}
