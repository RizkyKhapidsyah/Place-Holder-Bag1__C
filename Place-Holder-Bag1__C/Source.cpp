#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

int main()
{
	float a;
	float b = 5.0;

	printf("Input a number: ");
	scanf("%f", &a);
	printf("%f / %f = %f\n", a, b, a / b);

	_getch();
	return(0);
}