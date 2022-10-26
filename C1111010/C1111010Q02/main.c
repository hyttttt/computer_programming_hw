#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <ctype.h> 
#include <math.h>

int main()
{
	int times = 0;
	int count = 0;
	char buf[100];

	scanf("%d", &times);

	while (scanf("%s", buf)) {
		count++;					
		
		printf("Case %d: ", count);

		int i = 0;
		int j = 0;
		char c = buf[i];
		char num_str[10];

		while (1) {
			if (isdigit(buf[i])) {
				num_str[j] = buf[i];
				j++;
			}
			else {
				// convert string to num
				int k = j - 1;
				int num = 0;
				while (k >= 0) {
					num += (num_str[k] - '0') * (int)pow(10, j - k - 1);
					k--;
				}
				j = 0;

				// print the alphabet
				for (int a = 0; a < num; a++) {
					printf("%c", c);
				}

				// end of string
				if (buf[i] == '\0')
					break;

				// next alpabet
				c = buf[i];
			}
			i++;
		}

		printf("\n");
		
		if (count == times) {
			break;
		}
	}
}