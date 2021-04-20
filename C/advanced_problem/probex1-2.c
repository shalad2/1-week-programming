#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int n[5];
    int max = 1, min = 10;
    srand((unsigned)time(NULL));
    for(int i = 0; i < 5; i++){
        n[i] = rand() % 10 + 1;
        printf("%d ", n[i]);
        if(n[i] > max){
            max = n[i];
        }
        if(n[i] < min){
            min = n[i];
        }
    }
    printf("\n");
    printf("最大値：%d\n", max);
    printf("最小値：%d\n", min);
    return 0;
}