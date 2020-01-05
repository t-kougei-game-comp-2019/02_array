#include <stdio.h>


int main(int argc, char *argv[])
{
	char str[5];
	int array[100],count=0;
	
	while (fgets(str, sizeof(str), stdin)) {
		int c = atoi(str);
		
		if (c>=0) {
			array[count++]=c;
		}
		else if(-input<=count){
			printf("%d\n",array[-input-1]);
		}	
	}
	return 0;
}
