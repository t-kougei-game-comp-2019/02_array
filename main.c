#include <stdio.h>


int main()
{
	int str[5], i = 0,c, n, j;
	while (1) {
		scanf_s("%d", &str[i]);
		c = str[i];
		if (-100 <= c && c <= 100) {
			if (str[i] < 0) {
				str[i] *= -1;
				n = str[i];
				for (j = 0; j < n; j++) {
					printf("%d\n", str[j]);
				}
				break;
			}
			i++;
		}
		
	}
	return 0;
}
