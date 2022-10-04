#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
	float num1, num2;
	char oper;
	scanf("%f%c%f", &num1, &oper, &num2);

	if (oper == '+')
		printf("%.2f%c%.2f=%.2f", num1, oper, num2, num1 + num2);
	else if (oper == '-')
		printf("%.2f%c%.2f=%.2f", num1, oper, num2, num1 - num2);
	else if (oper == '*')
		printf("%.2f%c%.2f=%.2f", num1, oper, num2, num1 * num2);
	else if (oper == '/')
		printf("%.2f%c%.2f=%.2f", num1, oper, num2, num1 / num2);
	else
		printf("error");
}