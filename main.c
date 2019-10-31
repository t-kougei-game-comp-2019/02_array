#include <stdio.h>
#include<stdlib.h>


int main(int argc, char* argv[])

{

	int array[100];
	int index = 1;

	char str[5];
	int n;


	while (fgets(str, sizeof(str), stdin)) {
		n = atoi(str);
		if (n >= 0) {


			array[index++] = n;
			
		}
		else {
			printf("%d\n", array[-n]);

		}

	}




	return 0;

}
