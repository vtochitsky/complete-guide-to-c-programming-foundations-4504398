#include <stdio.h>
#include <stdlib.h>

int main()
{
	const double ratio = 3.0/4; //declare constant ratio equal to 3/4
	char a; //declare char a
	int b; //declare integer b
	float c; //declare float c

	a = 'a'; //assign char
	b = 5; //assign integer
	c = 0.1f; //assign float

	printf("the value of variable a is '%c'\n", a);					 // output char value, e.g., "the value of variable a is '?'"
	printf("the value of variable b is %2i\n", b);					 // output integer value, e.g., "the value of variable b is ??"
	printf("the value of variable c is %3.2f\n", c);				 // output float value, e.g., "the value of variable c is ???.??"
	printf("the value of constant ratio is %3.2f\n", ratio); // output value of ratio, e.g., "the value of constant ratio is ???.??"

	return 0;
}
