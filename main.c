#include <stdio.h>


int main()
{
	char str[5];
	int array[100],count=0;
	
	while (fgets(str, sizeof(str), stdin)) {
		int c = atoi(str);
		
		if (c>=0) {
			array[count]=c;
			count++;
		}
		else if(-input<=count){
			printf("%d\n",array[-input-1]);
		}	
		else
			:
	}
	return 0;
}
