#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
	int buf[10];
	int repeat[10];
	int sum = 0;

	for (int i = 0; i < 10; i++) {
		repeat[i] = 0;
		scanf("%d", &buf[i]);
	}

	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (buf[i] == buf[j]) {
				int k = 0;
				while (1) {
					if (repeat[k] == buf[i]) {
						break;
					}
					else if (repeat[k] == 0) {
						sum += buf[i];
						repeat[k] = buf[i];
						break;
					}
					else {
						k++;
					}
				}
			}
		}
	}

	printf("%d", sum);
}