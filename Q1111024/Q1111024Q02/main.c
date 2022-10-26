#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <ctype.h>

int main()
{
	char str[100];
	int offset;
	int i = 0;
	fgets(str, 100, stdin);
	scanf("%d", &offset);

	i = 0;
	while (str[i] != '\0') {
		if (isalpha(str[i])) {
			if (str[i] >= 'a' && str[i] <= 'z') {
				str[i] = (str[i] - 'a' + offset) % 26 + 'a';
			}
			else {
				str[i] = (str[i] - 'A' + offset) % 26 + 'A';
			}
		}
		i++;
	}

	printf("%s", str);
}