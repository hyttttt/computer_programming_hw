#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
	int layer;
	scanf("%d", &layer);

	for (int i = 0; i < layer; i++) {
		//blank space
		for (int j = 1; j < layer - i; j++) {
			printf(" ");
		}

		//alphabet
		for (int j = 0; j < 2 * i + 1; j++) {
			printf("%c", 'A' + i);
		}

		printf("\n");
	}
}