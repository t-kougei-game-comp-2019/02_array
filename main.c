#include <stdio.h>
int main(int argc, char *argv[])
{
    char str[5];
	while (fgets(str, sizeof(str), stdin)) {
		int input = atoi(str);
		if (input >= 0)
		{
			array[count++] = input;
		}
		else if(-input <= count)
		{
			printf("%d\n", array[-input - 1]);
		}
		else
		{
			printf("不正な入力です。\n");
		}
	}
	return 0;
}
