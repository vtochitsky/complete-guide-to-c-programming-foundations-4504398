#include <stdio.h>

void line(int count, char ch);

int main()
{
	puts("Report on Extraterrestrial Activity");
	line(35, '-');

	return (0);
}

void line(int count, char ch)
{
	for (int i = 0; i < count; i++)
		putchar(ch);
	putchar('\n');
}