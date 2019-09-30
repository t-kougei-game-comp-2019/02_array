#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    int num = 0, count = 0;
    int* array = mallloc(sizeof(int) * 100);
    while(fgets(str, sizeof(str), stdin))
    {
        num = atoi(str);

        if(num >= 0 && num <= 100)
        {
            if(count < 100)
            { 
                array[count] = num;
                count++;
            }
            else
            {
                printf("配列がいっぱいです。¥n");
            }
        }
        else if(num < 0 && num >= -100)
        {
            printf("%dが格納されています。¥n",array[-count - 1]);
        }
        else
        {
            printf("不正な入力です。¥n");
        }
    }

    free(array);
    return 0;
}
