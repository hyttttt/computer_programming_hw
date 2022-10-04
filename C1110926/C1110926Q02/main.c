#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
	float a1, a2, b1, b2;
	scanf("%f %f\n%f %f", &a1, &a2, &b1, &b2);

	printf("%.2f %.2f\n", a1 + b1, a2 + b2);
	printf("%.2f %.2f\n", a1 - b1, a2 - b2);
	printf("%.2f", a1 * b1 + a2 * b2);
}