#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
	float num1, num2;
	scanf("%f\n%f", &num1, &num2);

	printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
	printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
	printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
	printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
}