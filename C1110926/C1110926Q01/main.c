#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <math.h>

int main()
{
	float num1, num2, len;
	scanf("%f %f", &num1, &num2);

	len = sqrt(pow(num1, 2) + pow(num2, 2));

	printf("%.2f\n%.2f %.2f", len, num1 / len, num2 / len);
}