#include <stdio.h>

int main()
{
	struct birthday
	{
		int day;
		int month;
		int year;
	};

	struct person
	{
		struct birthday date;
		float height;
		char name[32];
	} me = {{1, 1, 1979}, 0.00187, "C Programmer"};

	printf("I'm %s, I'm %f km tall, I was born on %0d/%02d/%4d\n", me.name, me.height, me.date.day, me.date.month, me.date.year);

	return 0;
}
