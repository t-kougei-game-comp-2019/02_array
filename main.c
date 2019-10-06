#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    
    while(fgets(str, sizeof(str), stdin)){
        printf("%s", str);
        int num , count = 0;
        int *array = mallloc(sizeof(int) * 100)
        while(fgets(str , sizeof(str) , stdin))
        {
            num = atoi(str);
            
            fi(num => 0 && num <= 100)
            {
                if(count < 100){
                    array[count] = num;
                    couunt++;
                }
                else {
                    printf("配列外です。"\n);
                }
            }
            else if(num < 0&& num => 100){
              printf("%dが格納してあります。\n' , array[-count - 1]);
                     }
            else{
                printf("正しく入力してください。"\n");
                     }
                     
       }
    free(array);
    return 0;
}
