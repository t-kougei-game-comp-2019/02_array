#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    int array[100];
    int input,count=0;
    
    while(fgets(str, sizeof(str), stdin)){
        input=atoi(str);
        if(input>=0)
            array[count]=input;
        else
            printf("%d",array[-input-1]);
        count++;
    }

    return 0;
}
