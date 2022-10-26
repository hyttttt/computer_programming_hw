#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
	int lines = 0;
	scanf("%d", &lines);

	for (int i = 0; i < lines; i++) {
		char buf[100];
		scanf("%s", &buf);
		
		int j = 0;
		int count = 0;
		int sum = 0;
		while (buf[j] != '\0') {
			if (buf[j] == 'O') {
				count++;
			}
			else {
				count = 0;
			}
			sum += count;
			j++;
		}

		printf("%d\n", sum);
	}
}