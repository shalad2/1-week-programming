#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int x[10], y[10], z[10];
    int i, j = 0, k = 0;
    srand((unsigned)time(NULL));

    for(i = 0; i < 10; i++){
        x[i] = rand() % 100 + 1;
        printf("%d ", x[i]);
        if(x[i] % 2 == 0){
            y[j] = x[i];
            j++;
        }else{
            z[k] = x[i];
            k++;
        }
    }
    printf("\n");

    printf("偶数：");
    for(int i = 0; i < j; i++){
        printf("%d ", y[i]);
    }
    printf("\n");

    printf("奇数：");
    for(int i = 0; i < k; i++){
        printf("%d ", z[i]);
    }
    printf("\n");
}