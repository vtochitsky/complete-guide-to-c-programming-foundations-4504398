#include <stdio.h>
#include <string.h>

#define SIZE 32

int main()
{
	char string[SIZE];
	int quantity;
	float item_price;

	strcpy_s(string, SIZE, "Fish umbeallas");
	quantity = 12;
	item_price = 78.66f;

	printf("You have purchases %d %s at $%.2f each.\n"
				 "The total cost is $%.2f.\n",
				 quantity, string, item_price, quantity * item_price);

	return 0;
}
