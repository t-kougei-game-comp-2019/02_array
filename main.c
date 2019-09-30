#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) 
{
    char str[5];
    int array[100];
    int i=0;
    while(fgets(str, sizeof(str), stdin)){
        int tmp = strtol(str,NULL,10);
        printf("%d \n", abs(tmp));
    }

    return 0;
}
