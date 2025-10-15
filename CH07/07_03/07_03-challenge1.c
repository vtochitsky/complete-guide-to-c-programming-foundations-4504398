#include <stdio.h>
#include <ctype.h>

int main()
{
	char string[] = "Nifty TEXT! 123\n";

	int x = 0;
	int ch;

	while ((ch = string[x]) != '\0')
	{
		if (isupper(ch))
		{
			putchar(tolower(ch));
		}
		else /* if not upper */
		{
			putchar(toupper(ch));
		}
		x++;
	}
	// putchar('\n');

	return (0);
}
