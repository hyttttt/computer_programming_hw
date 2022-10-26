#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
	char buf[100];
	fgets(buf, sizeof(buf), stdin);

	int i = 0;
	int count = 0;

	while (buf[i] != '\0') {
		if (buf[i] == ' ') {
			printf("\n");
			count++;
		}
		else {
			printf("%c", buf[i]);
		}
		i++;
	}
	count++;
	printf("%d", count);
}