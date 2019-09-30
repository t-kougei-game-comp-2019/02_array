#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) 
{
    char str[255];
    int array[100];
    int i=0;
    while(fgets(str, sizeof(str), stdin)){
        int tmp = strtol(str,NULL,10);
        if(tmp>=0)
        {
            array[i]=tmp;
            i++;
        }
        else
        {
            printf("%d\n",array[ abs(tmp)-1]);
        }
    }

    return 0;
}
