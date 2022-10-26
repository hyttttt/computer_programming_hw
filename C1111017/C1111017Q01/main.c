#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
	char c;
	int sum_odd = 0, sum_even = 0;
	int i = 0;
	bool change = false;

	while ((c = getchar()) != '\n') {
		if (!change) {
			sum_odd += (int)(c - '0');
		}
		else {
			sum_even += (int)(c - '0');
		}

		printf("%c", c);
		change = !change;
		i++;
	}

	if (abs(sum_odd - sum_even) % 11 == 0) {
		printf(" is a multiple of 11.");
	}
	else {
		printf(" is not a multiple of 11.");
	}
}