#include <stdio.h>

int main()
{
	char title[] = "Pointers don't intimidate me!\n";
	char *p;
	p = title;
	
	int i = 0;
	while (*(p + i))
	{
		putchar(*(p + i));
		i++;
	}

	return 0;
}
