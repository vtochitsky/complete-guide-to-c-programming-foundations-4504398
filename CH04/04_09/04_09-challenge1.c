#include <stdio.h>

int main()
{
	int a;

	printf("How long is the line? ");
	scanf("%d", &a);

	/* write the loop here */
	for (int i = 0; i < a; i++)
	{
		putchar('-');
	}
	putchar('\n');

	while (a--)
	{
		putchar('-');
	}
	putchar('\n');

	return (0);
}
