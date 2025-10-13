#include <stdio.h>

int main()
{
	int a,b;

	printf("Enter two values, separated by a space: ");
	scanf("%d",&a);
	scanf("%d",&b);

	// add
	printf("%i + %i = %i\n", a, b, a+b);
	// subtract
	printf("%i - %i = %i\n", a, b, a-b);
	// multiply
	printf("%i * %i = %i\n", a, b, a*b);
	// divide
	printf("%i / %i = %f\n", a, b, (double)a/b);
	// modulus
	printf("%i %% %i = %d\n", a, b, a % b);
	// bit shift right
	printf("%i >> %i = %i\n", a, b, a >> b);
	// bit shift left
	printf("%i << %i = %i\n", a, b, a << b);

	return 0;
}
