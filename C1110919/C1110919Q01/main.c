#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
	for (int i = 2; i >= 0; i--) {
		for (int j = i; j > 0; j--) {
			printf(" ");
		}
		for (int k = 5 - 2 * i; k > 0; k--) {
			printf("*");
		}

		if (i != 0)
			printf("\n");
	}
}